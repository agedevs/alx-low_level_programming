#include <stdio.h>
#include "main.h"
/**
 * main - Prints all arguments passed into main
 * @argc: Number of command line arguments
 * @argv: One dimensional array name
 * Return: 0 always
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
