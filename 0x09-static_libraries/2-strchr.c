#include "main.h"
/**
 * _strchr - This function returns a pointer
 *
 * @s: The character to be written
 * @c: The character to be watched
 *
 * Return: Returns NULL
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
