#include "lists.h"

/**
 * listint_len - Function returns number of elements in linked listint_t list
 * @var: Pointer to listint_t list
 * Return: Returns number of elements in list
 */

size_t listint_len(const listint_t *var)
{
	size_t x = 0;

	if (var == NULL)
		return (0);

	while (var != NULL)
	{
		x++;
		var = var->next;
	}

	return (x);
}
