#include "calc.h"

/**
 * op_add - calculates sumation of its args
 * @a: first arg
 * @b: second arg
 *
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of a and b
 * @a: first arg
 * @b: second arg
 *
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates product of a and b
 * @a: first arg
 * @b: second arg
 *
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the division of a and b
 * @a: first arg
 * @b: second arg
 *
 * Return: the division result of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates remainder of a and b divided
 * @a: first arg
 * @b: second arg
 *
 * Return: the remainder of division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
