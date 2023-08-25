#include "lists.h"
#include <stdio.h>

/**
 * print_list - Outputs all elements of list_t list
 * @h: Points to linked list whose elements would be printed
 *
 * Return: Number of nodes in h
 *
 */
size_t print_list(const list_t *h)
{
	size_t nde = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
		nde++;
	}
	return (nde);
}
