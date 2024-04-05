#include "lists.h"
#include <string.h>
/**
 * add_node - adds a node at beggining of list
 * @head: pointer to list
 * @str: list element string
 *
 * Return:adress of new element
 */

list_t *add_node(list_t **head, const char *str)
{
	char *dup;
	list_t *new_n;
	int len = 0;

	new_n = malloc(sizeof(list_t));

	if (new_n == NULL)
	{
		free(new_n);
		return (NULL);
	}
	dup = strdup(str);

	if (dup == NULL)
	{
		free(new_n);
		return (NULL);
	}

	while (str[len] != '\0')
		len++;

	new_n->str = dup;
	new_n->len = len;
	new_n->next = (*head);

	(*head) = new_n;

	return (new_n);
}

