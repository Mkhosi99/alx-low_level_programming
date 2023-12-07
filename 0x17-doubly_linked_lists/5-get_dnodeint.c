#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: double pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: return NULL if node does not exist 
 *          where index is index of the node, starting from 0
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *crrnt;
	unsigned int x;

	crrnt = head;
	x = 0;
	while (crrnt != NULL)
	{
		if (x == index)
			return (crrnt);
		crrnt = crrnt->next;
		x++;
	}
	return (NULL);
}
