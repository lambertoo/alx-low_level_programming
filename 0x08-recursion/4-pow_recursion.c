#include "pow_recursion.h"

/**
 * _pow_recursion - calculate the power of the first arg raised
 * to the power of second arg.
 * @x: number to power
 * @y: the power number to use
 *
 * Return: the product (int)
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
