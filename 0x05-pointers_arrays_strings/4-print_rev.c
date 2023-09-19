#include "print_rev.h"
#include "_putchar.h"

/**
 * print_rev - print a string in reverse end it with a new line
 * @str: string to print in reverse
 *
 * Return: void.
 */
void print_rev(char *str)
{
	char *txt;
	int n;

	txt = str;
	n = 0;
	while (1)
	{
		if (txt[n] != '\0')
			n++;
		else
			break;
	}

	for (; n >= 0; n--)
	{
		if (txt[n] != '\0')
			_putchar(txt[n]);
		else
			continue;
	}

	_putchar('\n');
}
