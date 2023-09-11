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
	int m;

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			putchar(n);
			putchar(m);
			if (n == 56 && m == 57)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	printf("\n");

	return (0);
}
