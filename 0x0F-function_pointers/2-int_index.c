#include "function_pointers.h"

/**
 * int index - Looks for an interger in an array of intergers
 * @array: The intergers in the array
 * @size: The size of array
 * @cmp: Pointer to function that will compare values
 *
 *Return: If matches or size is <= 0 - -1
 *        Otherwise - Index of first element which cmp function
 *                    return 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array == NULL || cmp == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if (cmp(array[index]) != 0)
			return (index);
	}

	return (-1);
}
