#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RAND_MAx 2000000
/* more headers goes here */

/* betty style doc for function main goes there */
/**
 * main -Entry point.
 *
 * Description: program will assign a random numbe on var 'n'
 * each time it is executed.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
