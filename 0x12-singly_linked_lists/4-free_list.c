#include "lists.h"
#include <stdlib.h>

/**
 * free_list - Function that frees list_t list
 * @head: Points to the list_t list
 */
void free_list(list_t *head)
{
	list_t *tempo;

	while (head)
	{
		tempo = head->next;
		free(head->str);
		free(head);
		head = tempo;
	}
}
