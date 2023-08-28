#include "lists.h"

/**
 * add_nodeint - Function that adds a new node at beginning of listint_t list
 * @head: The head of listint_t list
 * @n: The info to be added in new node
 * Return: Returns address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		*head = new;

		return (new);
	}

	new->next = *head;
	new->n = n;
	*head = new;

	return (new);
}
