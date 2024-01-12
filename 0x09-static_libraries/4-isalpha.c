#include "main.h"
/**
 * _isalpha - checks if it is alphabet
 * @c: The character to be written
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
