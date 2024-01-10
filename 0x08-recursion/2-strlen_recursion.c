#include "main.h"

/**
 * _strlen_recursion - this function prints the length of a string without null
 * @s: the string which length should be printed
 * Return: Length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));

}
