#include "_isupper.h"

/**
 * _isupper - checkes for uppercase character
 * @c: the input character
 *
 * Return: 1 if c is uppercase
 * 0 otherwise
 */
int _upper(int c)
{
	int i = 65;

	while (i < 91)
	{
		if (c == i)
			return (1);
		++i;
	}

	return (0);
}
