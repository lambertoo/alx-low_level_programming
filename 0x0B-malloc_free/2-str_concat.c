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
	char *result;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
		len1++;

	while (s2[len2] != '\0')
		len2++;

	result = malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		result[i] = s1[i];

	for (j = 0; j < len2; j++)
		result[i + j] = s2[j];

	result[i + j] = '\0';

	return (result);
}
