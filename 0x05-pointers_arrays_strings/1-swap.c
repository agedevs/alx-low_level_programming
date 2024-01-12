#include "main.h"
/**
 * swap_int -This function swaps the value of the pointers
 * @a: The character to be checked
 * @b: The character to be checked
 */
void swap_int(int *a, int *b)
{
	int t;

	t = *a;
	*a = *b;
	*b = t;
}
