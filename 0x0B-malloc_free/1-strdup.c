#include "strdup.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - create a space in memory and
 * make a copyt of the arg passed.
 * @str: string to copy
 *
 * Return: pointer to duplicated string
 */
char *_strdup(char *str)
{
	unsigned int len, i;
	char *chrstr, *p;

	if (str == NULL)
		return ((char *) NULL);
	len = 0, i = 0;
	while (1)
	{
		len++;
		if (str[len] == '\0')
			break;
	}
	len++;

	if (len == 0)
		return ((char *) NULL);

	p = malloc(sizeof(char) * len);
	chrstr = p;
	while (1)
	{
		if (str[i] == '\0')
			break;

		chrstr[i] = str[i];
		i++;
	}
	free(p);
	chrstr[i++] = '\0';
	return (chrstr);
}
