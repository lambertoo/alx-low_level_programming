#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: Number of words.
 */
int count_words(char *str)
{
	int count = 0, in_word = 0;

	while (*str)
	{
		if (*str == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		str++;
	}
	return (count);
}

/**
 * malloc_word - Allocates memory for a word.
 * @start: Pointer to the start of the word.
 * @end: Pointer to the end of the word.
 *
 * Return: Pointer to the allocated memory.
 */
char *malloc_word(char *start, char *end)
{
	char *word;
	int i;

	word = malloc((end - start + 1) * sizeof(char));
	if (word == NULL)
		return (NULL);

	i = 0;
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: Pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, in_word, num_words, j;
	char *start, **result;

	if (str == NULL || *str == '\0')
		return (NULL);
	num_words = count_words(str);
	if (num_words == 0)
		return (NULL);
	result = malloc((num_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	i = 0, in_word = 0;
	start = NULL;
	while (*str)
	{
		if (*str == ' ')
		{
			if (in_word)
			{
				result[i++] = malloc_word(start, str);
				if (result[i - 1] == NULL)
				{
					for (j = 0; j < i; j++)
						free(result[j]);
					free(result);
					return (NULL);
				}
				i++;
				in_word = 0;
			}
		}
		else if (in_word == 0)
		{
			in_word = 1;
			start = str;
		}
		str++;
	}
	if (in_word)
	{
		result[i++] = malloc_word(start, str);
		if (result[i - 1] == NULL)
		{
			for (j = 0; j < i; j++)
				free(result[j]);
			free(result);
			return (NULL);
		}
	}
	result[i] = NULL;
	return (result);
}
