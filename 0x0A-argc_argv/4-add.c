#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - program that adds positive numbers.
 * @argc: number of arguments
 * @argv: One dimensional array with the arguments
 *
 * Return: always 0
 **/
int main(int argc, char *argv[])
{
	int i, sum = 0, res = 0;
	char c[] = "Error", *if_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if_letter = argv[i];
			while (*if_letter != 0)
			{
				if (*if_letter < 47 || *if_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				if_letter++;
			}
			res = atoi(argv[i]);
			sum += res;
		}
		printf("%d\n", sum);
	}
	else
		printf("%d\n", 0);
	return (0);
}
