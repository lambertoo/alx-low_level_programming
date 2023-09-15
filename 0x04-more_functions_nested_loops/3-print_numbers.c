#include "print_numbers.h"
#include "_putchar.h"

/**
 * print_numbers - print numbers from 0 - 9
 *
 * Return: void
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i + 48);
		++i;
	}
	_putchar('\n');
}
