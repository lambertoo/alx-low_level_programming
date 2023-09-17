#include "print_number.h"
#include "_putchar.h"

void positive_num(int);
void negative_num(int);

/**
 * print_number - print integers
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	if (n >= 0)
		positive_num(n);
	else
		negative_num(n);
}

/**
 * positive_num - prints positive integers
 * @n: integer number
 *
 * Return: void
 */
void positive_num(int n)
{
	int hrd, thsnd;

	if (n >= 1000)
	{
		thsnd =  (n / 1000) * 1000;
		hrd = ((n - thsnd) / 100) * 100;

		_putchar((thsnd / 1000) + 48);
		_putchar((hrd / 100) + 48);
		_putchar(((n - (thsnd + hrd)) / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if ((n < 1000) && (n >= 100))
	{
		hrd = (n / 100) * 100;

		_putchar((hrd / 100) + 48);
		_putchar(((n - hrd) / 10) + 48);
		_putchar((n % 10) + 48);
	}
	else if ((n < 100) && (n >= 0))
	{
		if (n > 10)
			_putchar((n / 10) + 48);
		_putchar((n % 10) + 48);
	}
}

/**
 * negative_num - prints integers that are negatice
 * @n: integer number
 *
 * Return: void
 */
void negative_num(int n)
{
	int thsnd, hrd, posi;

	if ((n < 0) && (n > -100))
	{
		posi = n * (-1);

		_putchar('-');
		_putchar((posi / 10) + 48);
		_putchar((posi % 10) + 48);
	}
	else if ((n <= -100) && (n > -1000))
	{
		posi = n * (-1);
		hrd = (posi / 100) * 100;

		_putchar('-');
		_putchar((hrd / 100) + 48);
		_putchar(((posi - hrd) / 10) + 48);
		_putchar((posi % 10) + 48);
	}
	else if (n <= -1000)
	{
		posi = n * (-1);
		thsnd =  (posi / 1000) * 1000;
		hrd = ((posi - thsnd) / 100) * 100;

		_putchar('-');
		_putchar((thsnd / 1000) + 48);
		_putchar((hrd / 100) + 48);
		_putchar(((posi - (thsnd + hrd)) / 10) + 48);
		_putchar((posi % 10) + 48);
	}
}
