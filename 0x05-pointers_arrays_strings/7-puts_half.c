#include "puts_half.h"
#include "_putchar.h"

/**
 * puts_half - prints half of the string
 * @str: string to print on stdout
 *
 * Return: void.
 */
void puts_half(char *str)
{
	char *txt;
	int n, c;

	txt = str;
	c = 0;
	while (1)
	{
		if (txt[c] != '\0')
			c++;
		else
			break;
	}

	n = c / 2;
	if ((c % 2) == 1)
		n += 1;

	for (; 1 ; ++n)
	{
		if (str[n] != '\0')
			_putchar(str[n]);
		else
			break;
	}

	_putchar('\n');
}
