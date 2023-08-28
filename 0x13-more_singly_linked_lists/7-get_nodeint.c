#include "lists.h"

/**
 * get_nodeint_at_index - Function returns nth node of listint_t linked list
 * @head_list: The head of the list
 * @index: Index of node, starting at zero
 * Return: Returns the nth node of list
 */

listint_t *get_nodeint_at_index(listint_t *head_list, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tempo;

	if (!head_list)
		return (NULL);

	tempo = head_list;

	/* Check to see if the node exists */
	while (tempo)
	{
		tempo = tempo->next;
		x++;
	}

	if (index >= x)
	{
		return (NULL);
	}

	x = 0;
	tempo = head_list;

	while (tempo && x < index)
	{
		tempo = tempo->next;
		x++;
	}

	return (tempo);
}
