#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list with a loop.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *hash_table[1024];
	size_t i, count;

	for (i = 0; i < 1024; i++)
	{
		hash_table[i] = NULL;
	}
	count = 0;
	while (head)
	{
		if (hash_table[(unsigned long int)head % 1024] == head)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			return (count);
		}
		printf("[%p] %d\n", (void *)head, head->n);
		hash_table[(unsigned long int)head % 1024] = head;
		head = head->next;
		count++;
	}
	return (count);
}
