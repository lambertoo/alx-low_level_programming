#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *visited[1024];
	size_t i;

	while (current)
	{
		for (i = 0; i < count; i++)
		{
			if (current == visited[i])
			{
				printf("-> [%p] %d\n", (void *)current, current->n);
				exit(98);
			}
		}
		visited[count] = current;
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		current = current->next;
	}
return (count);
}
