#include "main.h"
/**
 * _strpbrk - function that searches a string for any of a set of bytes..
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
char *_strpbrk(char *s, char *accept)
{
	int m = 0;

	while (*s)
	{
		while (accept[m] != '\0')
		{
			if (*s == accept[m])
				return (s);
			m++;
		}
		m = 0;
		s++;
	}
	return ('\0');
}
