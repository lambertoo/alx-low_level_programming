#include "lists.h"

/**
 * list_len - returns number of elements in a linked list_t list
 * @h: linked list head
 *
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
