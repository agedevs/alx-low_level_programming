#include <stdio.h>
/**
 * main - Entry poit
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0;
	long m = 1, l = 2;

	while (n < 50)
	{
		if (n == 0)
			printf("%ld", m);
		else if (n == 1)
			printf(", %ld", l);
		else
		{
			l += m;
			m = l - m;
			printf(", %ld", l);
		}
		++n;
	}
	printf("\n");
	return (0);
}
