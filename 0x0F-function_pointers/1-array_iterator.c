#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - Function that iterates an array
 * @array: Character that stores array value
 * @size: Size of the array
 * @action: The function of pointers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
