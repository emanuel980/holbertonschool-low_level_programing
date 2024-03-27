#include "lists.h"
/**
 * dlistint_len - returns number of elements in list
 * @h: pointer to list
 *
 * Return: number of elements in list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t c = 0;

	while (h)
	{
		c++;
		h = h->next;
	}
	return (c);
}
