#include "lists.h"

/**
 * free_listint - Function frees a listint_t list
 * @head_list: The head of listint_t list
 * Return: return zero
 */

void free_listint(listint_t *head_list)
{
	listint_t *tempo;

	while (head_list != NULL)
	{
		tempo = head_list;
		head_list = head_list->next;
		free(tempo);
	}
}
