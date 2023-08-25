#include "lists.h"

/**
 * list_len - Determines the number of elements in
 *            linked list_t link
 * @h: The linked list, list_t
 *
 * Return: The number of elements in list_t
 */
size_t list_len(const list_t *h)
{
	size_t number = 0;

	while (h)
	{
		number++;
		h = h->next;
	}

	return (number);
}
