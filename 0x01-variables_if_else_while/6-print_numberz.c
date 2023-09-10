#include <stdio.h>

/**
 * main - Entry point never disappoint
 *
 * Description: Print all alphabet in lowercase
 * using only putchar().
 *
 * Return: 0 (success)
 */
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
