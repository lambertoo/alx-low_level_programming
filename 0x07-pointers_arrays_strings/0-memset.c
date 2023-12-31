#include "_memset.h"

/**
 * _memset - fills memory with a constant byte.
 * @s: address of memory to print
 * @b: character to fill in
 * @n: size to fill in
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
