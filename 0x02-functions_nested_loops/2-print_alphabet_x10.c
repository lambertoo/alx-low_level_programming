#include "print_alphabet_x10.h"
#include "_putchar.h"

/**
 * print_alphabet_x10 - prints all alphabet 10 times
 * in lowercase
 *
 * Return: (void)
 */
void print_alphabet_x10(void)
{
	char c;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
