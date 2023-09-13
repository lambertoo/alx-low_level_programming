#include "times_table.h"
#include "_putchar.h"

/**
 * times_table - print the 9 times table
 *
 * Description: nesting for loop
 *
 * Return: void
 */
void times_table(void)
{
	int m;
	int t;
	int eq;

	for (m = 0; m <= 9; m++)
	{
		for (t = 0; t <= 9; t++)
		{
			eq = m * t;

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
