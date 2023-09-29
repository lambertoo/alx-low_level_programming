#include "is_prime_number.h"

int prime_helper(int, int);

/**
 * is_prime_number - prints 1 or 0 is the input number is
 * prime or not.
 * @n: input number
 *
 * Return: true or false (int)
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_helper(n, n - 1));
}

/**
 * prime_helper - helper to find prime number
 * @n: number to find prime num for
 * @div: divisor to calc prime num
 *
 * Return: int
 */
int prime_helper(int n, int div)
{
	if (div <= 1)
		return (1);
	if (n % div == 0)
		return (0);
	return (prime_helper(n, div - 1));
}
