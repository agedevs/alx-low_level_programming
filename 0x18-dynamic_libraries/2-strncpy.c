#include "main.h"
/**
 * _strncpy - This function copies a string with a number of bytes
 *
 * @dest: This variable represents destination
 * @src: This variable represents the source
 * @n: This represents the number of bytes to be copied
 *
 * Return: This function returns dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i  < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
