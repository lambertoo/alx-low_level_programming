#include <stdio.h>

/**
 * main - Entry point never disappoint
 *
 * Description: Print all the numbers of base 16
 * in lowercase and using only putchar()
 *
 * Return: 0 (success)
 */
int main(void)
{
	char hex;
	char lex;

	for (hex = '0'; hex <= '9'; hex++)
		putchar(hex);

	for (lex = 'a'; lex <= 'f'; lex++)
		putchar(lex);

	putchar('\n');

	return (0);
}
