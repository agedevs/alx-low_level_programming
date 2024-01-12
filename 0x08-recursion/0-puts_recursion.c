#include "main.h"
/**
 * _puts_recursion - This function prints a string
 *
 * @s: The character to be written
 *
 * Return: Value 0 is returned
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
