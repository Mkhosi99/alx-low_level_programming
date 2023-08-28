#include "lists.h"

/**
 * pop_listint - Function the deletes the head node of listint_t linked list,
 * returns the head nodes data (n)
 * @head: Points to the head of list
 * Return: returns head nodes data
 */

int pop_listint(listint_t **head)
{
	int x;

	listint_t *tempo;

	if (*head == NULL)
		return (0);

	tempo = *head;
	x = (*head)->n;
	*head = (*head)->next;
	free(tempo);

	return (x);
}
