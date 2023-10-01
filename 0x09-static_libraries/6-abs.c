#include "_abs.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the integer to compute for
 *
 * Return: the computed value
 */
int _abs(int n)
{
	if (n > 0)
		return (n);
	else if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
		return (0);
}
