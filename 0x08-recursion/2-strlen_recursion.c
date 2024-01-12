#include "main.h"
/**
 * _strlen_recursion - This function pints the number of characters
 * @s: The character to be written
 *
 * Return: String length is to be returned
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
