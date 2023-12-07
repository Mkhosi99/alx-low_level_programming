#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - function prints all the elements of dlistint_t list
 * @h: head of doubly linked list
 * Return: number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t ndes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		ndes++;
	}
	return (ndes);
}
