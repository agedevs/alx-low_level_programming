#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes.
 *
 * Return: A pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concats;
	unsigned int len = n, i;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i]; i++)
	{
		len++;
	}

	concats = malloc(sizeof(char) * (len + 1));

	if (concats == NULL)
	{
		return (NULL);
	}

	len = 0;

	for (i = 0; s1[i]; i++)
	{
		concats[len++] = s1[i];
	}

	for (i = 0; s2[i] && i < n; i++)
	{
		concats[len++] = s2[i];
	}
	concats[len] = '\0';

	return (concats);
}
