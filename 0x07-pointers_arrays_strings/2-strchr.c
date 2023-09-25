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

	for (i = 0; 1; i++)
	{
		if (s[i] == '\0')
			return (0);
		else if (s[i] ==  c)
			return (s + i);
	}
}
