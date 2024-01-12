#include "function_pointers.h"
/**
 * int_index - Function that searches for an iteger
 * @array: Array parameter to be taken
 * @size: Size of the integer in question
 * @cmp: Function pointer himself
 *
 * Return: Returning i
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
			}
		}
	}
	return (-1);
}
