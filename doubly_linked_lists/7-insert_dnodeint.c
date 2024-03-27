#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at given position
 * @h: pointer to list
 * @idx: index, but poorly abbreviated
 * @n: data of new node
 *
 * Return: adress of new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_n, *tmp = *h;

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (idx != 1)
	{
		tmp = tmp->next;
		idx--;
		if (tmp == NULL)
			return (NULL);
	}

	if (tmp->next == NULL)
		return (add_dnodeint_end(h, n));

	new_n = malloc(sizeof(dlistint_t));

	new_n->n = n;
	new_n->next = tmp->next;
	new_n->prev = tmp;
	tmp->next->prev = new_n;
	tmp->next = new_n;

	return (new_n);
}






