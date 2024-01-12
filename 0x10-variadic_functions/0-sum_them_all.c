#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sums up as many value as given
 * @n: The initialization of the many input
 * @...: The many input
 *
 * Return: The result is returned
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int result = 0;
	va_list sum_them;

	va_start(sum_them, n);
	if (n == 0)
	{
		return (0);
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			result += va_arg(sum_them, unsigned int) ;
		}
	}
	va_end(sum_them);
	return (result);
}
