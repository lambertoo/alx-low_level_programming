#include "more_numbers.h"
#include "_putchar.h"

/**
 * more_numbers - print 10 times numbers
 * from 0 - 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 0;

		while (j < 15)
		{
			if (j > 9)
				_putchar((j / 10) + 48);

			_putchar((j % 10) + 48);
			++j;
		}
		++i;
		_putchar('\n');
	}
}
