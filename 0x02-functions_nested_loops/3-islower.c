#include "_islower.h"

/**
 * _islower - checks for lowercase character
 * @c: character to verify
 *
 * Return: 1 if lowercase
 * 0 otherwise
 */
int _islower(int c)
{
	if (((int)c >= 97) && ((int)c <= 122))
		return (1);
	else
		return (0);
}
