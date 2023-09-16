#include "print_triangle.h"
#include "_putchar.h"

/**
 * print_triangle - draw a triangle in terminal
 * @n: size of the triangle
 *
 * Return: void
 */
void print_triangle(int n)
{
	int i;
	int j;
	int k;

	for (i = 1; i <= n; ++i)
		{
			for (j = 1; j <= n - i; ++j)
				{
					_putchar(' ');
				}
			for (k = 0; k < i; k++)
				{
					_putchar('#');
				}
			_putchar('\n');
		}

	if (n <= 0)
		_putchar('\n');
}
