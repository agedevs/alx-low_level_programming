#include "function_pointers.h"
/**
 * print_name - Takes in several functions to print name
 * @name: The character to be considered
 * @f: The functions pointer to be considered
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
