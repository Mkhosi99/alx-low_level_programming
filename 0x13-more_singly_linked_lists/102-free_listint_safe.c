#include "lists.h"

/**
 * free_listint_safe - Function frees listint_t list,
 *                     Function can also free lists with a loop
 * @head: Indicates head of listint_t list
 * Return: number of nodes freed
 */

size_t free_listint_safe(listint_t **head)
{
	int diffrnce_of_addr;
	listint_t *tempo;
	size_t add_freed = 0;

	if (head == NULL || *head == NULL)
		return (0);

	while (*head != NULL)
	{
		diffrnce_of_addr = *head - (*head)->next;
		if (diffrnce_of_addr > 0)
		{
			tempo = (*head)->next;
			free(*head);
			*head = tempo;
			add_freed++;
		}
		else
		{
			free(*head);
			*head = NULL;
			add_freed++;
			break;
		}
	}

	*head = NULL;

	return (add_freed);
}
