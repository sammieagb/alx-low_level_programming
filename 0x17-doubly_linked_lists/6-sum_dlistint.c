#include "lists.h"

/**
 * sum_dlistint - returns sum of allthe data (n)
 * of a doubly linked lis
 *
 * @head: head of the lt
 * Return: sum of tata
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
