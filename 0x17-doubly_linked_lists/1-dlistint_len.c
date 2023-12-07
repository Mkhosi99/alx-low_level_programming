#include "lists.h"

/**
 * dlistint_len - function returns number of elements in linked dlistint_t list
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t ndes = 0;
	const dlistint_t *tmp;

	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		ndes++;
	}
	return (ndes);
}
