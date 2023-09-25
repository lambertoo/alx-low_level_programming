#include "_memcpy.h"

/**
 * _memcpy - copies memory area
 * @dest: where to paste the copied string
 * @src: string to copy
 * @n: size of text to copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
