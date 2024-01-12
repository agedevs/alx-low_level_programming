#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - To print out only numebers
 * @separator: To seperate the numbers with comma
 * @n: The number of the input value
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int re;
	va_list print_num;

	va_start(print_num, n);
	for (i = 0; i < n; i++)
	{
		re = va_arg(print_num, int);
		printf("%d", re);
		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(print_num);
}
