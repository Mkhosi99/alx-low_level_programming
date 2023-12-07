#include "lists.h"

/**
 * free_dlistint - function frees a doubly linked list
 * @head: points to the head of doubly linked list to free
 * Return: 0
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
