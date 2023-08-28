#include "lists.h"

/**
 * print_listint_t- Function prints all elements of listint_t list
 * @myvar: Pointer to listint_t list
 * Return: returns the number of nodes
 */

size_t print_listint(const listint_t *myvar)
{
	size_t x = 0;

	if (myvar == NULL)
		return (x);

	while (myvar != NULL)
	{
		printf("%d\n", myvar->n);
		x++;
		myvar = myvar->next;
	}

	return (x);
}
