#include "swap_int.h"

/**
 * swap_int - Swaps the values of two integers.
 * @a: first number to swap.
 * @b: second number to swap.
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	*a = *b + *a;
	*b = *a - *b;
	*a = *a - *b;
}
