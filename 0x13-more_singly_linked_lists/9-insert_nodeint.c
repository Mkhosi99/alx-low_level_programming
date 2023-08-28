#include "lists.h"

/**
 * insert_nodeint_at_index - Function inserts a new node at a given position
 * @head: Pointer to head of linked list
 * @index: Index of list where new node should be added, starts at 0
 * @n: Data that will be added to new node
 * Return: returns address of new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *tempo;
	listint_t *newNde;
	unsigned int x = 0;

	if (!head)
		return (NULL);

	newNde = malloc(sizeof(listint_t));

	if (!newNde)
		return (NULL);

	newNde->n = n;
	newNde->next = NULL;

	if (index == 0)
	{
		newNde->next = (*head);
		*head = newNde;
		return (newNde);
	}

	tempo = *head;

	for (x = 0; tempo && x < index; x++)
	{
		if (x == index - 1)
		{
			newNde->next = tempo->next;
			tempo->next = newNde;
			return (newNde);
		}
		else
			tempo = tempo->next;
	}

	return (NULL);
}
