#include "lists.h"

/**
 * add_dnodeint - function adds new node at beginning of dlistint_t list
 * @head: double pointer to head of the list
 * @n: data to be added in list
 *
 * Return: address of new element, NULL if otherwise
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNde;

	newNde = malloc(sizeof(dlistint_t));
	if (newNde == NULL)
		return (NULL);

	newNde->n = n;
	newNde->next = *head;
	newNde->prev = NULL;
	if (*head != NULL)
		(*head)->prev = newNde;
	*head = newNde;
	return (newNde);
}
