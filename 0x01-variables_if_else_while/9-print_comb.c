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
	char n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
		if (n == '9')
			continue;

		putchar(',');
		putchar(' ');
	}

	printf("\n");

	return (0);
}
