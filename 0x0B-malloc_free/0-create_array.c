#include "create_array.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of the data
 * @c: data to write
 *
 * Return: Pointer to array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *charray;
	unsigned int i;

	if (size == 0)
		return (NULL);

	charray = malloc(sizeof(c) * size);
	if (charray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		charray[i] = c;

	return (charray);
}
