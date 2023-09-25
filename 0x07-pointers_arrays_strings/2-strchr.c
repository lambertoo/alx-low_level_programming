#include "_strchr.h"

/**
 * _strchr - locates a character in a string.
 * @s: given string
 * @c: character to locate
 *
 * Return: pointer to the first character in the string or NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] ==  c)
			break;
	}

	return (s + i);
}
