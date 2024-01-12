#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabeth = 'z';

	while (alphabeth >= 'a')
	{
		putchar(alphabeth);
		alphabeth--;
	}

	putchar('\n');

	return (0);
}
