#include "main.h"
/**
 * _memset - This function fills the block of the memory
 *				with a specific byte
 * @s: The address of the variable
 * @b: The value to be considered
 * @n: The number of n bytes
 *
 * Return: The value to be returned is memry
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;
	char *memry = s;
	int val = b;

	for (ind = 0; ind < n; ind++)
	{
		memry[ind] = val;
	}
	return (memry);
}
