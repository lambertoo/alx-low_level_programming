#include "str_concat.h"
#include <stdlib.h>

/**
 * str_concat - concatenate two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string
 */
char * str_concat(char *s1, char *s2)
{
	char *newstr;
	int i, j;

	i = 0, j = 0;
	while (1)
		{
			if (s1[i] == '\0')
				break;
			i++;
		}
	i++;

	while (1)
		{
			if (s2[j] == '\0')
				break;
			j++
		}
	j++;

	i += j;

	newstr = malloc(sizeof(char) * i);
	if (newstr == NULL)
		return (NULL);

	while (1)
		{
			
}
