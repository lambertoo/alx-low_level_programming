#include "strncpy.h"

/**
 * _strncpy - copies two strings using 'n' bytes
 * @dest: hold the addition string
 * @src: source of the addition string
 * @n: number of bytes from 'src'
 *
 * Return: Pointer to resulting string 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; (j < n) && (src[j] != '\0'); j++)
	{
		dest[j] = src[j];
	}
	if (src[j] == '\0')
		dest[j] = '\0';

	return (dest);
}
