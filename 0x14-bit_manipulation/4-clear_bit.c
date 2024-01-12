#include "main.h"
/**
 * clear_bit - Clears the bit value.
 * @n: pointing to an input value.
 * @index: The bit value to be considered.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
	{
		return (-1);
	}

	value = 1 << index;

	if (*n & value)
	{
		*n ^= value;
	}

	return (1);
}
