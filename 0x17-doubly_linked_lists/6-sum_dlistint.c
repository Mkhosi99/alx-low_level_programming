#include "lists.h"

/**
 * sum_dlistint - function sums the element in the list
 * @head: points to the head of the list
 * Return: the sum of all elements in the list or NULL
 */
int sum_dlistint(dlistint_t *head)
{
	int add = 0;

	while (head)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
