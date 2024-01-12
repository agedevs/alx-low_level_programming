#include "main.h"
/**
 * _pow_recursion - This functions returns the power of a value
 * @x: Value of the integer
 * @y: Value of the power
 *
 * Return: Returns the result
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
