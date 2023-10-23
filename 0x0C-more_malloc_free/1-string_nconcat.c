#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - Concatenates two strings with a limit on the second string.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the newly allocated concatenated string, or NULL on failure.
 */

char *string_nconcat(char *s1, char *s2, unsigned int max_bytes)
{
	unsigned int len_first, len_second, i, j;
	char *concatenated_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len_first] != '\0')
	{
		len_first++;
	}
	while (s2[len_second] != '\0')
	{
		len_second++;
	}
	if (max_bytes >= len_second)
	{
		max_bytes = len_second;
	}
	concatenated_string = malloc(len_first + max_bytes + 1);
	if (concatenated_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len_first; i++)
	{
		concatenated_string[i] = s1[i];
	}
	for (j = 0; j < max_bytes; j++)
	{
		concatenated_string[i + j] = s2[j];
	}
concatenated_string[i + j] = '\0';
return (concatenated_string);
}
