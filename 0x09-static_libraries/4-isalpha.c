#include "isalpha.h"
#include "_putchar.h"

/**
 * _isalpha - checks for uppercase or
 * lowecase character
 * @c: character to verify
 *
 * Return: 1 if uppercase or lowercase
 * 0 otherwise
 */
int _isalpha(int c)
{
	if (((int)c >= 97) && ((int)c <= 122))
		return (1);
	else if (((int)c >= 65) && ((int)c <= 90))
		return (1);
	else
		return (0);
}
