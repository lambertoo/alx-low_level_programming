#include <stdio.h>

/**
 * main - check the code
 * @argc: number of argument passed
 * @argv: array of arguments passed
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; ++n)
	{}
	printf("%d\n", --n);

	(void)argv;
	return (0);
}
