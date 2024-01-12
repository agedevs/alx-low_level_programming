#include "main.h"
/**
 * _memcpy - This function is used to copy a block of data from a
 *					source address to a destination
 * @dest: The destiinaion variable
 * @src: The source variable
 * @n: The number of n block
 *
 * Return: This functio returns destin
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num = n;
	unsigned int i;
	char *source = (char *)src;
	char *destin = (char *)dest;

	for (i = 0; i < num; i++)
	{
		destin[i] = source[i];
	}
	return (dest);
}
