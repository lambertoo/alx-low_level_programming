#include "sqrt_recursion.h"

int _sqrt_rec(int, int, int);

/**
 * _sqrt_recursion - calculates the natural square root of a number
 * @n: number to calculate square root for
 *
 * Return: square root (int)
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1)
		return (n);
	return (_sqrt_rec(n, 1, n));
}

/**
 * _sqrt_rec - calculates the square root
 * @n: number to calculate square root for
 * @left: left calc
 * @right: right calc
 *
 * Return: (int)
 */
int _sqrt_rec(int n, int left, int right)
{
	long mid, square;

	mid = left + (right - left) / 2;
	square = mid * mid;

	if (left > right)
		return (-1);

	if (square == n)
		return (mid);
	else if (square < n)
		return (_sqrt_rec(n, mid + 1, right));
	else
		return (_sqrt_rec(n, left, mid - 1));
}
