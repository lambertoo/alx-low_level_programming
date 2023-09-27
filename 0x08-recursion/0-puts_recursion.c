#include "puts_recursion.h"
#include "_putchar.h"

/**
 * _puts_recursion - prints a string in recursion
 * @s: string to print
 *
 * Return: Void
 */
void _puts_recursion(char *s)
{
	_putchar(*s);
	s++;
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_puts_recursion(s);
}
