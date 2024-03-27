#include "lists.h"
/**
 * free_dlistint - frees allocated memory in list
 * @head: pointer to list
 *
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
