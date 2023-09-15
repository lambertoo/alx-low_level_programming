#include "print_diagonal.h"
#include "_putchar.h"

/**
 * print_diagonal - draw a diagonal line in terminal
 * @n: length of the diagonal line to draw
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1;

	while (i <= n)
	{
		int j = 1;

		++i;
		while (j <= (i - 1))
		{
			_putchar(' ');
			++j;
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
		_putchar('\n');
}
