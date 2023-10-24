#include <stdlib.h>
#include "lists.h"

/**
 * find_listint_loop - Find the loop in a linked list (Floyd's cycle-finding)
 * @head: Pointer to the head of the linked list.
 * Return: The address of the node where the loop
 * starts, or NULL if there's no loop.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow, *fast;

	if (head == NULL)
	{
		return (NULL);
	}
	slow = head;
	fast = head;
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		if (slow == fast)
		{
			slow = head;
			while (slow != fast)
			{
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
	}
	return (NULL);
}
