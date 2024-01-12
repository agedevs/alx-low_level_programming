#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory like malloc.
 * @ptr: pointing to the memory previously allocated.
 * @old_size: The size in bytes for the allocated space.
 * @new_size: The size in bytes for the new memory block.
 *
 * Return: A pointer to the reallocated memory block is returned.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *mem;
	char *ptr_cpy, *fills;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		mem = malloc(new_size);

		if (mem == NULL)
			return (NULL);

		return (mem);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr_cpy = ptr;
	mem = malloc(sizeof(*ptr_cpy) * new_size);

	if (mem == NULL)
	{
		free(ptr);
		return (NULL);
	}

	fills = mem;

	for (index = 0; index < old_size && index < new_size; index++)
		fills[index] = *ptr_cpy++;

	free(ptr);
	return (mem);
}
