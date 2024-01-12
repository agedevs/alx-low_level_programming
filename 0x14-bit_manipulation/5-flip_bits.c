#include "main.h"
/**
 * flip_bits - This function flips the number of bits given.
 * @n: number one.
 * @m: number two.
 *
 * Return: The total bits is returned.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int bits_count;

	for (bits_count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
		{
			bits_count++;
		}
	}
	return (bits_count);
}
