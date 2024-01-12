#include "main.h"
#include <stdlib.h>
/**
 * _strdup - This function allocates a memory space
 * @str: The character to be written
 *
 * Return: Returns a duplicate string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = (char *)malloc((sizeof(char) * len) + 1);
	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		duplicate[i] = str[i];
	}
	duplicate[len] = '\0';

	return (duplicate);
}
