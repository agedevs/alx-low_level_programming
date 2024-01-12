#include "main.h"
/**
 * get_endianness - Checking for endianness
 *
 * Return: condition for the size of the endian
 */
int get_endianness(void)
{
	unsigned int value;
	char *cha;

	value = 1;
	cha = (char *) &value;

	return ((int)*cha);
}
