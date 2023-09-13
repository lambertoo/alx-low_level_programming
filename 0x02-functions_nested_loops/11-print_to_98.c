#include "print_to_98.h"
#include "_putchar.h"

/**
 * print_to_98 - print all natural number up to 98
 * @n: input starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		less_than_equal_98(n);
	}
	else if (n > 98)
	{
		greater_than_98(n);
	}

	_putchar('\n');
}

/**
 * less_than_equal_98 - print natural number less than 98
 * @n: starting number
 *
 * Return: void
 */
void less_than_equal_98(int n)
{
	int i;

	for (i = n; i <= 98; i++)
	{
		int p = 0;

		if ((i > -100) && (i < 0))
		{
			p = i * -1;
			_putchar('-');
			if (i < -9)
				_putchar((p / 10) + 48);
			_putchar((p % 10) + 48);
		}
		else
		{
			if (i > 9)
				_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}

/**
 * greater_than_98 - print all natural number greater than 98
 * @n: starting number
 *
 * Return: void
 */
void greater_than_98(int n)
{
	int i, hrd = 0;

	for (i = n; i >= 98; i--)
	{
		if (i >= 100)
		{
			hrd = ((i / 100) * 100);
			_putchar((i / 100) + 48);
			_putchar(((i - hrd) / 10) + 48);
			_putchar((i % 10) + 48);
		}
		else if ((i < 100) && (i >= 0))
		{
			_putchar((i / 10) + 48);
			_putchar((i % 10) + 48);
		}
		else
			_putchar((i % 10) + 48);

		if (i != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
}
