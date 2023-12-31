#include "_strspn.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring
 * @s: original string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int l = 0, i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		int found;

		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (found)
			l++;
		else
			break;
	}
	return (l);
}
