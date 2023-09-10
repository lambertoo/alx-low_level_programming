#include <stdio.h>

/**
 * main - Entry point never disappoint
 *
 * Description: Print all alphabet in lowercase and
 * in uppercase using only putchar().
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;
	char C;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	for (C = 'A'; C <= 'Z'; C++)
		putchar(C);

	putchar('\n');

	return (0);
}
