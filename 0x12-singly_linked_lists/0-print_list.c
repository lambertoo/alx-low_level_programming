#include <stdlib.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to list head
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int count, i, c, j;
	char *null_str = "[0] (nil)";

	count = 0;
	while (h != NULL)
	{
		c = h->len;
		if (h->str == NULL)
		{
			for (j = 0; null_str[j] != '\0'; j++)
			{
				_putchar(null_str[j]);
			}
			_putchar('\n');
		}
		else
		{
			_putchar('[');
			_putchar(c + 48);
			_putchar(']');
			_putchar(' ');
			for (i = 0; h->str[i]; i++)
			{
				_putchar(h->str[i]);
			}
			_putchar('\n');
		}
		count++;
		h = h->next;
	}

	return (count);
}
