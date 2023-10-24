#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint_safe - Prints a listint_t linked list safely.
 * @head: A pointer to the head of the linked list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *current = head;
	const listint_t *check;

	while (current)
	{
		count++;
		printf("[%p] %d\n", (void *)current, current->n);
		check = head;
		while (check != current)
		{
			if (check == current->next)
			{
				printf("-> [%p] %d\n", (void *)check, check->n);
				return (count);
			}
			check = check->next;
		}
		current = current->next;
	}
	return (count);
}
