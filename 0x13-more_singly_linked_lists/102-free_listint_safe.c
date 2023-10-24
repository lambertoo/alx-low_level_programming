#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current, *tmp;
	listint_t *visited[1024];
	size_t i;

	if (!h || !(*h))
	{
		return (0);
	}
	current = *h;
	while (current)
	{
		visited[size] = current;
		size++;
		if (size > 1024)
		{
			return (0);
		}
		tmp = current;
		current = current->next;
		free(tmp);
		for (i = 0; i < size; i++)
		{
			if (current == visited[i])
			{
				*h = NULL;
				return (size);
			}
		}
	}
	*h = NULL;
	return (size);
}
