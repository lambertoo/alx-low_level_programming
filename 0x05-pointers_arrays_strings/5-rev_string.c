#include "rev_string.h"
#include "_putchar.h"

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

	l = n;
	for (c = -1; n >= 0; n--, c++)
	{
		if (txt[n] != '\0')
			str[c] = txt[n];
		else
			continue;
	}

	str[l] = '\0';
}
