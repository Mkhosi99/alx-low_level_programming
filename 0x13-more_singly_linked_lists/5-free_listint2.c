#include "lists.h"

/**
 * free_listint2 - Function frees listint2_t list and sets the head to NULL
 * @head_list: Points to the head of the list
 * Return: returns zero
 */

void free_listint2(listint_t **head_list)
{
	listint_t *tempo;

	if (head_list == NULL)
		return;

	while (*head_list != NULL)
	{
		tempo = *head_list;
		*head_list = (*head_list)->next;
		free(tempo);
	}

	*head_list = NULL;
}
