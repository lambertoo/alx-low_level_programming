#include "print_numbers.h"
#include "_putchar.h"

/**
 * print_number - print integers
 * @n: input integer
 *
 * Return: void
 */
void print_number(int n)
{
	int hrd = 0, thsnd = 0, posi = 0;

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
	else if ((n < 0) && (n > -100))
	{
		posi = n * (-1);

		_putchar('-');
		_putchar((posi / 10) + 48);
		_putchar((posi % 10) + 48);
	}
}
