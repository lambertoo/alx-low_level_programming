#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: pointer to the name
 * @f: function pointer that print the name
 *
 * return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if ((*f) == NULL)
		return;
	(*f)(name);
}
