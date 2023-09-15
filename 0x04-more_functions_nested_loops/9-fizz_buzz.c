#include <stdio.h>

/* func declaration */
int mul_3_5(int);

/**
 * main -  program entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		switch (mul_3_5(n))
		{
		case 3:
			printf("Fizz ");
			break;
		case 5:
			printf("Buzz ");
			break;
		case 15:
			printf("FizzBuzz ");
			break;
		default:
			printf("%d ", n);
			break;
		}
	}
	printf("\n");
	return (0);
}

/**
 * mul_3_5 - find the multiples of 3, 5 and 15
 * @m: input number
 *
 * Return: 3, 5, and 15 for multiple of 3, 5,and 15
 */
int mul_3_5(int m)
{
	if ((m % 15) == 0)
		return (15);
	else if ((m % 3) == 0)
		return (3);
	else if ((m % 5) == 0)
		return (5);
	else
		return (m);
}
