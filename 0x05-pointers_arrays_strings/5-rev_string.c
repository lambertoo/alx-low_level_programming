#include "rev_string.h"
#include "_putchar.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @str: string to reverse
 *
 * Return: void.
 */
void rev_string(char *str)
{
	char *txt;
	int n, c, l;

	txt = str;
	n = 0;
	while (1)
	{
		if (txt[n] != '\0')
			n++;
		else
			break;
	}

	for (c = -1; n >= 0; n--, c++)
	{
		printf("%c,", txt[n]);
		str[c] = txt[n];
		l = n;
	}

	str[l] = '\0';
}
