#include <stdio.h>

/**
 * main - Entry point never disappoint
 *
 * Description: Print all numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
		if (n == 57)
			continue;

		putchar(',');
		putchar(' ');
	}

	printf("\n");

	return (0);
}
