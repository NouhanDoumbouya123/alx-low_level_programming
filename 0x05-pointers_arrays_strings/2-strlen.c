#include "stdio.h"

/**
 * _strlen - prints the length of a string
 * @s: the parameter of the function
 *
 * Return: length of a string
 *
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
