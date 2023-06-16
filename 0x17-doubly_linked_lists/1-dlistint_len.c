#include "lists.h"

/**
 * dlistint_len - returns the er nts of a istint_t list
 * @h: pointer to the hea
 * Return: the number of des
 */
size_t dlistint_len(const dlistint_t *h)
{
	int number = 0;

	if (h == NULL)
		return (number);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		number++;
		h = h->next;
	}
	return (number);
}
