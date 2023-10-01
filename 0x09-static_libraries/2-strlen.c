#include "strlen.h"
#include "_putchar.h"

/**
 * _strlen - counting characters in the string + '\0'
 * returns it as the length of a string
 * @s: string variable.
 *
 * Return: void.
 */
int _strlen(char *s)
{
	char *c;
	int n;

	c = s;
	n = 0;
	while (1)
	{
		if (c[n] != '\0')
			n++;
		else
			break;
	}

	return (n);
}
