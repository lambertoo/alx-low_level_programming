#include "_isdigit.h"

/**
 * _isdigit - checkes for digit
 * @c: the input character
 *
 * Return: 1 if c is a digit
 * 0 otherwise
 */
int _isdigit(int c)
{
	int i = 48;

	while (i < 58)
	{
		if (c == i)
			return (1);
		++i;
	}

	return (0);
}
