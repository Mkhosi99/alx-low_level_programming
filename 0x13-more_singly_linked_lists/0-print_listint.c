#include "lists.h"

/**
 * print_listint - Function prints all elements of listint_t list
 * @var: Pointer to listint_t list
 *
 * Return: Returns number of nodes
 */

size_t print_listint(const listint_t *var)
{
	size_t x = 0;

	while (var != NULL)
	{
		printf("%d\n", var->n);
		x++;
		var = var->next;
	}
	return (x);
}
