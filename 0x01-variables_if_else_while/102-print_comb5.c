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
	int o;

	for (n = 48; n <= 57; n++)
	{
		for (m = n + 1; m <= 57; m++)
		{
			for (o = m + 1; o <= 57; o++)
			{
				putchar(n);
				putchar(m);
				putchar(o);
				if (n == 55 && m == 56 && o == 57)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	printf("\n");

	return (0);
}
