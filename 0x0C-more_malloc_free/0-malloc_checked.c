#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates a memory using malloc
 * @b: The the size of the space
 *
 * Return: The value of ptr is returned
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
