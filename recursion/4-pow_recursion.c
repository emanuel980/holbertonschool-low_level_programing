#include "main.h"
/**
 * _pow_recursion - raises value of x to the power of y
 * @x: base number
 * @y: exponent number
 * Return: product or -1 if negative number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y <= 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
