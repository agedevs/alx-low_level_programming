#include "main.h"
/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the destination variable
 *@src: This is the source variable
 *
 * Return: This return to dest, that concatenates two strings
 */
char *_strcat(char *dest, char *src)
{
	int n, m;

	for (n = 0; dest[n] != '\0'; n++)
		;
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[n] = src[m];
		n++;
	}
	return (dest);
}
