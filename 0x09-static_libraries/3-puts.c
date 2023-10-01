#include "puts.h"
#include "_putchar.h"

/**
 * _puts - prints a string followed by a new line to stdout.
 * @str: string to print on stdout
 *
 * Return: void.
 */
void _puts(char *str)
{
	char *txt;
	int n;

	txt = str;
	n = 0;
	while (1)
	{
		if (txt[n] != '\0')
		{
			_putchar(txt[n]);
			n++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
