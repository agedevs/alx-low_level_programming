#include "main.h"
/**
 * factorial - This function loops to calculate the value of a variable
 * @n: The character to be written
 *
 * Return: conditonal return statement
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
