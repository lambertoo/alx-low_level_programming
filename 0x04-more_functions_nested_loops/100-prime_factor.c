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
	long bgnum = 0;

	while (n % 2 == 0)
	{
		n = n / 2;
		if (bgnum < 2)
			bgnum = 2;
	}

	for (i = 3; i * i <= n; i = i + 2)
	{
		while (n % i == 0)
		{
			n = n / i;
			if (bgnum < i)
				bgnum = i;
		}
	}

	if (n > 2)
	{

		if (bgnum < n)
			bgnum = n;
	}

	printf("%ld\n", bgnum);

	return (0);
}
