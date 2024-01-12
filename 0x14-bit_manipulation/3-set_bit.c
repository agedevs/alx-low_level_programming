#include "main.h"
/**
 * set_bit - This function sets the value of a bit to 1.
 * @n: pointing to the manipulated bit.
 * @index: index of the bit.
 *
 * Return: Worked or not worked.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int value;

	if (index > 63)
	{
		return (-1);
	}
	value = 1 << index;
	*n = (*n | value);
	return (1);
}
