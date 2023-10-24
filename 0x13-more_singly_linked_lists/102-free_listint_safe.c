#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - Prints a listint_t linked list.
 * @head: Pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *tortoise = head, *hare = head;
    size_t count = 0;

    while (hare && hare->next)
    {
        printf("[%p] %d\n", (void *)tortoise, tortoise->n);
        tortoise = tortoise->next;
        hare = hare->next->next;
        count++;

        if (tortoise == hare)
        {
            printf("-> [%p] %d\n", (void *)tortoise, tortoise->n);
            return count;
        }
    }

    return count;
}

