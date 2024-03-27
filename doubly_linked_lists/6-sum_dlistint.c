#include "lists.h"
/**
 * sum_dlistint - return sum of all the data of n memeber of list
 * @head: pointer to list
 *
 * Return: sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

