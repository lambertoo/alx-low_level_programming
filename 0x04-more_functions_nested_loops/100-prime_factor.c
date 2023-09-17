#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;
	int i;
	
	while (n % 2 == 0)
		{
			printf("%d ", 2);
			n = n / 2;
		}
 
	for (i = 3; i * i <= n; i = i + 2)
		{
			while (n % i == 0)
				{
					printf("%d ", i);
					n = n / i;
				}
		}

	if (n > 2)
		printf("%ld ", n);

	printf("\n");

	return (0);
}
