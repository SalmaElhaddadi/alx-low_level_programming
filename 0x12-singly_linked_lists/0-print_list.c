#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to singly linked list
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int counter = 0;
	const list_t *new_node = h;

	while (new_node)
	{
		if (new_node->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			printf("[%u] %s\n", new_node->len, new_node->str);
		}
		new_node = new_node->next;
		counter++;
	}
	return (counter);
}
