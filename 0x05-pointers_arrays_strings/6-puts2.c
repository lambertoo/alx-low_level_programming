#include "puts2.h"
#include "_putchar.h"

/**
 * puts2 - prints one letter and jumps another in a string
 * @str: string to print on stdout
 *
 * Return: void.
 */
void puts2(char *str)
{
	char *txt;
	int n;

	txt = str;
	n = 0;
	while (1)
	{
		if (txt[n] != '\0')
		{
			if ((n % 2) == 0)
			{
				_putchar(txt[n]);
			}
			n++;
		}
		else
		{
			break;
		}
	}
	_putchar('\n');
}
