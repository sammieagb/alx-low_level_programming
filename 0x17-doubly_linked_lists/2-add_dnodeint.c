#include "lists.h"

/**
 * add_dnodeint - adds a nw node at the ginng of a doubly nked list
 * @head: Pointer  head of the list
 * @n: node toadded
 * Return: Add of the new ementNULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	temp = *head;

	if (temp != NULL)
	{
		while (temp->prev != NULL)
			temp = temp->prev;
	}

	new->next = temp;
	if (temp != NULL)
		temp->prev = new;

	*head = new;

	return (new);
}
