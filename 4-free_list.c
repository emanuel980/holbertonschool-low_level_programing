#include "lists.h"
/**
 * free_list - deallocates list from memory
 * @head: pointer to list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	head = NULL;
}
