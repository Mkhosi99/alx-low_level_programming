#include "function_pointers.h"

/**
 * array_iterator - Runs a function given as parameter
 *                  to each element of array
 * @array: The indicated array
 * @size: The indicated size of the array
 * @action: Pointer to function that must be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
