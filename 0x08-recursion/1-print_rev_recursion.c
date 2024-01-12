#include "main.h"
/**
 * _print_rev_recursion - This function reverses string
 * @s: The character to be written
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
