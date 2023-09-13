#include "print_last_digit.h"
#include "_putchar.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the number in person
 *
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int rmn;

	if (n < 0)
	{
		n = n + 2;
		n = n * (-1);
		rmn = n % 10;
		rmn = rmn + 2;
	}
	else
		rmn = n % 10;

	_putchar(rmn + 48);
	return (rmn);
}
