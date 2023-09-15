#include "print_square.h"
#include "_putchar.h"

/**
 * print_square - draw a square in terminal
 * @size: size of the square to draw
 *
 * Return: void
 */
void print_square(int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		int j;

		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
