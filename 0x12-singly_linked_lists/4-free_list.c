#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: the head of the least
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->head;
	free(head->str);
	free(head);

	head = temp;
	}
}
