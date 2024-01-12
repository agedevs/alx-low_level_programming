#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *@s: first value -char
 *@accept: second value - char
 *
 * Return: char with result
 */
unsigned int _strspn(char *s, char *accept)
{
	int m = 0, n = 0;
	unsigned int i = 0;

	while (s[n] != ' ' && s[m] != '\0')
	{
		while (accept[m] != '\0')
		{
			if (s[n] == accept[m])
				i++;
			m++;
		}
		n++;
		m = 0;
	}
	return (i);
}
