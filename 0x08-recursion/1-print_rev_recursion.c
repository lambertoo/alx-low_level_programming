#include "print_rev_recursion.h"
#include "_putchar.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: String to print
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
