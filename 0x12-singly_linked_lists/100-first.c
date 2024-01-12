#include <stdio.h>
/**
 * home - I bore my house on my back
 *
 * Return: No return
 */
void __attribute__ ((constructor)) home(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
