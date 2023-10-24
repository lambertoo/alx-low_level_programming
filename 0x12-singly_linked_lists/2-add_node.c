#include "lists.h"

/**
 * add_node - adds new node the begging of a linked list
 * @head: linked list head
 * @str: data to add on the node
 *
 * Return: new node pointer
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, count;
	list_t *new_node;

	if (str == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = strlen(str);
	new_node->next = *head;
	*head = new_node;
	_putchar('[');
	for (i = 0; new_node->str[i] != '\0'; ++i)
	{
		count++;
	}
	if (count >= 10)
	{
		_putchar((count / 10) + 48);
		_putchar((count % 10) + 48);
	}
	else
		_putchar(count + 48);
	_putchar(']');
	for (i = 0; new_node->str[i] != '\0'; ++i)
		_putchar(new_node->str[i]);
	_putchar('\n');
	return (new_node);
}
