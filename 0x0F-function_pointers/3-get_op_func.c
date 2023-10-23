#include "calc.h"

/**
 * get_op_func - finds the operator to use
 * @a: first argument
 * @b: second argument
 *
 * Return: pointer to function correspond to operator
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = { {"+", op_add},
				   {"-", op_sub},
				   {"*", op_mul},
				   {"/", op_div},
				   {"%", op_mod},
				   {NULL, NULL} };
	int i;
}
