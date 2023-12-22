#include "main.h"

/**
 * print_diagonal - print diagonal lines based on n
 *
 * @n: the number of times that the line should be printed
 *
 * Return: Always (0)
 */

void print_diagonal(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
}
