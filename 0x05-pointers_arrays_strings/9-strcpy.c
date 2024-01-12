#include "main.h"
/**
 * _strcpy - This is a function that copies the string
 * @dest: destinaton
 * @src: source
 * Return: non 0.
 */
char *_strcpy(char *dest, char *src)
{
	int n = 0;

	while (n >= 0)
	{
		*(dest + n) = *(src + n);
		if (*(src + n) == '\0')
		{
			break;
		}
		n++;
	}
	return (dest);
}
