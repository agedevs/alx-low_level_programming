#include "main.h"
/**
 * _strncat - Concatinates strings definining the sizes
 *
 * @dest: This is the destination variable
 * @src: This is the source variable
 * @n: This is the n bytes from src
 *
 * Return: This function returns dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, num;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (num = 0; num < n && src[num] != '\0'; num++)
	{
		dest[i] = src[num];
		i++;
	}
	if (num < n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
