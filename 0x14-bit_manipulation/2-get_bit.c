#include "main.h"
/**
 * get_bit - This function gets any index given value of a bit.
 * @n: This acts as a condition checker.
 * @index: The character to be noted for the given bit.
 *
 * Return: bitis returned.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (n == 0 && index < 64)
	{
		return (0);
	}
	for (i = 0; i <= 63; n >>= 1, i++)
	{
		if (index == i)
		{
			return (n & 1);
		}
	}

	return (-1);
}
