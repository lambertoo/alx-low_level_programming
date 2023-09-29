#include "is_prime_number.h"

int is_prime(int n, int i = 2);

/**
 * is_prime_number - prints 1 or 0 is the input number is
 * prime or not.
 * @n: input number
 *
 * Return: true or false (int)
 */
int is_prime_number(int n)
{
	if (n <= 2)
		return ((n == 2) ? 1 : 0);
	return (is_prime(n));
}

/**
 * is_prime - verifies if the given num is prime
 * @n: given number
 * @i: diversor
 *
 * Return: 1 if true or 0 otherwise (int)
 */
int is_prime(int n, int i = 2)
{
	if (n % i == 0)
		return (0);
	if (i * i > n)
		return (1);
	return (is_prime(n, i + 1);
}
