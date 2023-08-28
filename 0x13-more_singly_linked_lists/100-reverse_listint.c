#include "lists.h"

/**
 * reverse_listint - Function reverses listint_t linked list
 * @head: Points to first node in new list
 * Return: pointer to first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *before = NULL;
	listint_t *following = NULL;

	while (*head)
	{
		following = (*head)->next;
		(*head)->next = before;
		before = *head;
		*head = following;
	}

	*head = before;

	return (*head);
}
