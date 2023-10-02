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
	printf("%ld\n", (atoi(argv[1]) * atoi(argv[2])));
	(void)argc;

	return (0);
}
