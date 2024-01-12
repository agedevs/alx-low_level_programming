#include "main.h"
/**
 * leet - replaces a bunch of numbers with letters
 *
 * @lee: the string to look at
 *
 * Return: the new string
 */
char *leet(char *lee)
{
	char arr[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char replace[] = {'4', '3', '0', '7', '1'};
	int i, j;

	for (i = 0; lee[i] != '\0'; i++)
	{
		for (j = 0; arr[j] != '\0'; j++)
		{
			if (lee[i] == arr[j])
			{
				lee[i] = replace[j / 2];
			}
		}
	}
	return (lee);
}
