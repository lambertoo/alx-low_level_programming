#include "main.h"
#include "_isdigit.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 *Return: Always 0.
 */
int main(void)
{
	char c;

	c = '8';
	printf("%c: %d\n", c, _isdigit(c));
	c = '0';
	printf("%c: %d\n", c, _isdigit(c));
	c = 'a';
	printf("%c: %d\n", c, _isdigit(c));
	c = ':';
	printf("%c: %d\n", c, _isdigit(c));
	c = '-';
	printf("%c: %d\n", c, _isdigit(c));
	return (0);
}
