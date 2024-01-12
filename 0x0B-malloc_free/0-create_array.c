#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - Function that creates an array of chars.
 * @size: Th number of allocated memory
 * @c: The character to be written
 *
 * Return: Returning NULL or the pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = (char *)malloc(size * sizeof(char));

	if (size == 0)
	{
		return (NULL);
	}
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}

