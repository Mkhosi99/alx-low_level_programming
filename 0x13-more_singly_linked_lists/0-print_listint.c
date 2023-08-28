#include "lists.h"

/**
 * print_listint - Function prints all elements of listint_t list
 * @var: Pointer to listint_t list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *var)
{
	size_t x = 0;

	if (var == NULL)
		return (x);

	while (var != NULL)
	{
		printf("%d\n", var->n);
		x++;
		var = var->next;
	}

	return (x);
}
