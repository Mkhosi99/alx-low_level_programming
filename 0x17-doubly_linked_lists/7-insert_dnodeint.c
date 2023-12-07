#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position
 * @h: points to head of the dlistint_t list
 * @idx: position to insert new node
 * @n: integer for new node to contain
 *
 * Return: NULL if failure
 *         Otherwise - address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp = *h, *newNde;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (; idx != 1; idx--)
	{
		temp = temp->next;
		if (temp == NULL)
			return (NULL);
	}

	if (temp->next == NULL)
		return (add_dnodeint_end(h, n));

	newNde = malloc(sizeof(dlistint_t));
	if (newNde == NULL)
		return (NULL);

	newNde->n = n;
	newNde->prev = temp;
	newNde->next = temp->next;
	temp->next->prev = newNde;
	temp->next = newNde;

	return (newNde);
}
