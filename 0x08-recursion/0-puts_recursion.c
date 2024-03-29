#include "main.h"

/**
 * _puts_recursion - function that prints a string to the stdout
 *
 * @s: the string to be printed
 *
 * return: Always (0)
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(s + 1);
}
