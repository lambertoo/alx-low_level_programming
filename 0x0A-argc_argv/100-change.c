#include <stdio.h>
#include <stdlib.h>

int calc_coins(int);

/**
 * main - check the code
 * @argc: number of arguments
 * @argv: value of arguments
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int coins, cents;

	coins = 0;
	if (argc > 1)
	{
		cents = atoi(argv[1]);
		if (cents < 0)
			printf("0\n");
		else
			coins = calc_coins(cents);

		printf("%d\n", coins);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}

/**
 * calc_coins - calculating coins for change
 * @cents: amount to convert into change
 *
 * Return: coins(int)
 */
int calc_coins(int cents)
{
	int coins;

	coins = 0;
	for (; cents > 0;)
	{
		if (cents > 25)
		{
			coins += (cents / 25);
			cents %= 25;
		}
		else if (cents >= 10)
		{
			coins += (cents / 10);
			cents %= 10;
		}
		else if (cents >= 5)
		{
			coins += (cents / 5);
			cents %= 5;
		}
		else if (cents >= 2)
		{
			coins += (cents / 2);
			cents %= 2;
		}
		else if (cents >= 1)
		{
			coins += 1;
			cents -= 1;
		}
	}
	return (coins);
}
