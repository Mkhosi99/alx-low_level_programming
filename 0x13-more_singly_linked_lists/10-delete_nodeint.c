#include "lists.h"

/**
 * delete_nodeint_at_index - Function deletes node at index of listint_t list
 * @head: Pointer to head of the list
 * @index: Index of node that will be deleted
 * Return: returns 1 if success and -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *tempo;
	listint_t *present = *head;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = present->next;
		free(present);
		return (1);
	}

	for (x = 0; present != NULL && x < index - 1; x++)
		present = present->next;

	if (present == NULL || present->next == NULL)
		return (-1);

	tempo = present->next;
	present->next = tempo->next;
	free(tempo);

	return (1);
}
