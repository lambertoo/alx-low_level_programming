#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc
 * @size: The number of bytes to allocate
 *
 * Return: A pointer to the allocated memory
 *         Exits with status 98 if malloc fails
 */

void *malloc_checked(unsigned int size)
{
	void *ptr = malloc(size);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
