#include "lists.h"

/**
 * add_node_end - adds a node at the end of a list
 * @head: the head of the node
 * @str: the string to be duplicated
 * Return: returns the address of newnode or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;

	unsigned int i, count = 0;

	newnode = malloc(sizeof(list_t));

	newnode->str = strdup(str);

	if (newnode == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	newnode->len = count;

	newnode->next = NULL;

	temp = *head;

	if (temp == NULL)
		*head = newnode;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
	}

	return (newnode);
}
