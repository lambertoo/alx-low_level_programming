#include "print_times_table.h"
#include "_putchar.h"

/**
 * print_times_table - print the 9 times table
 * @n: starting point
 *
 * Description: nesting for loop
 *
 * Return: void
 */
void print_times_table(int n)
{
	int m, t, eq;

	for (m = 0; m <= n; m++)
	{
		for (t = 0; t <= n; t++)
		{
			eq = m * t;

			if (eq < 100)
				{
					
				}
			if (eq < 10)
			{
				if ((t > 0) && (t <= 9))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(eq + 48);
			}
			else if (eq > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((eq / 10) + 48);
				_putchar((eq % 10) + 48);
			}

			if (t == 9)
				continue;
		}
		_putchar('\n');
	}
}
