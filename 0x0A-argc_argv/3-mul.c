#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: number of argument passed
 * @argv: array of arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	if (argc > 2)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
