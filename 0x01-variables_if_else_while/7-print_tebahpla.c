#include <stdio.h>

/**
 * main - Entry point never disappoint
 *
 * Description: Print all alphabet in lowercase
 * and in reverse using only putchar().
 *
 * Return: 0 (success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
		putchar(c);

	putchar('\n');

	return (0);
}
