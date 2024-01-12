#include "main.h"
/**
 * _islower - Checks for lower case letter
 * @c: The character to be written
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
