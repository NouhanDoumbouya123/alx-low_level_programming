#include "lists.h"

/**
 * list_len - prints the number of nodes
 * @h: the head of the node
 * Return: the elements
 */

size_t list_len(const list_t *h)
{
	size_t nodes_count = 0;

	while (h != NULL)
	{
		nodes_count++;

		h = h->next;
	}

	return (nodes_count);
}
