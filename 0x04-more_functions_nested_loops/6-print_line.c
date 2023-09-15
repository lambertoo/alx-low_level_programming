#include "print_line.h"
#include "_putchar.h"

/**
 * print_line - draw a straight line in terminal
 * @n: length of a line to draw
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		++i;
	}
	_putchar('\n');
}
