#include "strlen_recursion.h"

/**
 * _strlen_recursion - count the length of a string in recursive way
 * @s: string to count
 *
 * Return: string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return 1 + _strlen_recursion(s + 1);
}
