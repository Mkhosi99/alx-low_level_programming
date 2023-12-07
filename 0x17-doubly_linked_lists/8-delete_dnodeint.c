#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - A function that deletes the node at index.
 * @h: double pointer to the head
 * @index: index to be inserted to new node
 * Return: 1 on succes -1 on failure
 */
int delete_dnodeint_at_index(dlistint_t **h, unsigned int index)
{
	dlistint_t *temp = NULL;
	unsigned int i = 0;

	if (!h || !(*h))
	{
		return (-1);
	}
	else
	{
		temp = *h;
		while (index != i++ && temp)
			temp = temp->next;
		if (!temp)
			return (-1);
		if (temp->next)
			temp->next->prev = temp->prev;
		if (index == 0)
			*h = temp->next;
		else
			temp->prev->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}
