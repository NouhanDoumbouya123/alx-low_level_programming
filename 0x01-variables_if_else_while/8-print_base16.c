#include <stdio.h>

/**
 * main - print all the numbers in base 16
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;
	char letter;

	for (n = 0; n <= 9; n++)
		putchar(n + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
