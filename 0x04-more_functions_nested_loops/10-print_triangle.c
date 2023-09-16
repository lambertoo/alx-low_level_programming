#include "print_triangle.h"
#include "_putchar.h"

/**
 * print_triangle - draw a triangle in terminal
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= size; ++i)
	{
		for (j = 1; j <= size - i; ++j)
		{
			_putchar(' ');
		}
		for (k = 0; k < i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}

	if (size <= 0)
		_putchar('\n');
}
