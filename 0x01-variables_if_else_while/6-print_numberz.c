#include <stdio.h>

/**
 * main - print all single digits starting from 0
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	putchar('\n');
	return (0);
}
