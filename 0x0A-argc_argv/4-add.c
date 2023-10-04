#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - check the code
 * @argc: number of argument passed
 * @argv: array of arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i, sum, val;

	sum = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			val = atoi(argv[i]);
			if (!isdigit(*argv[i]) && val == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			if (atoi(argv[i]) > 0)
			{
				sum += atoi(argv[i]);
			}
		}
		printf("%d\n", sum);
	}
	else
		{
			printf("0\n");
		}
	return (0);
}
