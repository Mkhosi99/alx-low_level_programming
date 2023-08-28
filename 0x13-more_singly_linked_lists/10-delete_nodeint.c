#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes node at index of listint_t list
 * @head_list: Pointer to head of the list
 * @index: Index of node that will be deleted
 * Return: returns 1 if success and -1 if failure
 */

int delete_nodeint_at_index(listint_t **head_list, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tempo = *head_list;
	listint_t *present = NULL;

	if (!(head_list))
		return (-1);

	if (index == 0)
	{
		tempo = (*head_list)->next;
		free(*head_list);
		*head_list = tempo;
		return (1);
	}

	for (x = 0; x < index - 1; x++)
	{
		if (!tempo || !(tempo->next))
			return (-1);
		tempo = tempo->next;
	}

	present = tempo->next;
	tempo->next = present->next;
	free(present);

	return (1);
}
