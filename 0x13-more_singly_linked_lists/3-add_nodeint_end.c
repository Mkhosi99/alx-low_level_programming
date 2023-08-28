#include "lists.h"

/**
 * add_nodeint_end - Function that adds new node at the end of listint_t list
 * @head: Indicates the end of listint_t list
 * @n: The info that will be added to new node
 * Return: Returns address of the new element or NULL is failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNde;
	listint_t *tempo;

	newNde = malloc(sizeof(listint_t));

	if (newNde == NULL)
		return (NULL);
	tempo = *head;

	if (*head == NULL)
	{
		newNde->next = NULL;
		newNde->n = n;
		*head = newNde;

		return (newNde);
	}

	while (tempo->next != NULL)
	{
		tempo = tempo->next;
	}

	newNde->next = NULL;
	newNde->n = n;
	tempo->next = newNde;

	return (newNde);
}

