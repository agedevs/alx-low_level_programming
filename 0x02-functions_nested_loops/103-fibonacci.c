#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long m = 1, l = 2, result = l;

	while (l + m < 4000000)
	{
		l += m;
		if (l % 2 == 0)
		{
			result += l;
		}
		m = l - m;
		++n;
	}
	printf("%ld\n", result);
	return (0);
}
