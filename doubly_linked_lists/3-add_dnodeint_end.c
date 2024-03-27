#include "lists.h"
/**
 * add_dnodeint_end - add node at end of list
 * @head: pointer to pointer of list
 * @n: int member of list
 *
 * Return: adress of new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *last, *new_n;

	new_n = malloc(sizeof(dlistint_t));

	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}

	new_n->n = n;
	new_n->next = NULL;

	if (*head == NULL)
	{
		new_n->prev = NULL;
		*head = new_n;
		return (new_n);
	}
	last = *head;


	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new_n;
	new_n->prev = last;

	return (new_n);
}
