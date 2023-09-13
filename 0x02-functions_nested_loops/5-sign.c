#include "print_sign.h"
#include "_putchar.h"

/**
 * print_sign - prints the sign of a number
 * @n: character to verify
 *
 * Return: 1 if n greater than o
 * -1 if n less than 0
 * 0 otherwise
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
