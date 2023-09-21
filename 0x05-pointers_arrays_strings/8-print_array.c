#include "print_array.h"
#include "_putchar.h"

void print_pos(int);
void print_neg(int);

/**
 * print_array - prints 'n' elements of an array
 * @a: arrary passed as reference
 * @n: number of elements
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (a[i] >= 0)
			print_pos(a[i]);
		else if (a[i] < 0)
			print_neg(a[i]);

		if (i != (n - 1))
		{
			_putchar(',');
			_putchar(' ');
		}
	}

	_putchar('\n');
}

/**
 * print_pos - prints positive numbers.
 * @i: number argument
 *
 * Return: void
 */
void print_pos(int i)
{
	int hrd, thsnd;

	if (i >= 1000)
	{
		thsnd = ((i / 1000) * 1000);
		hrd = ((i / 100) * 100);
		_putchar((i / 1000) + 48);
		_putchar(((i - hrd) / 100) + 48);
		_putchar(((i - (thsnd + hrd)) / 10) + 48);
		_putchar((i % 10) + 48);
	}
	if ((i > 100) && (i < 1000))
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

}

/**
 * print_neg - prints the negative numbers
 * @i: the number argument
 *
 * Return: void
 */
void print_neg(int i)
{
	int p, hrd, thsnd;

	if ((i > -10000) && (i <= -1000))
	{
		p = i * -1;
		_putchar('-');
		thsnd = ((p / 1000) * 1000);
		hrd = ((p / 100) * 100);
		_putchar((p / 1000) + 48);
		_putchar(((p - thsnd) / 100) + 48);
		_putchar(((p - (thsnd + hrd)) / 10) + 48);
		_putchar((p % 10) + 48);
	}
	else if ((i > -1000) && (i <= -100))
	{
		p = i * -1;
		_putchar('-');
		hrd = ((p / 100) * 100);
		_putchar((p / 100) + 48);
		_putchar(((p - hrd) / 10) + 48);
		_putchar((p % 10) + 48);
	}
	else if ((i > -100) && (i < 0))
	{
		p = i * -1;
		_putchar('-');
		if (i < -9)
			_putchar((p / 10) + 48);
		_putchar((p % 10) + 48);
	}
}
