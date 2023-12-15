#include <stdio.h>

/**
 *main - to print the alphabets in lower cases
 *Description: It is a c code
 * Return: Always (0)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	putchar(letter);
	putchar('\n');
	return (0);
}
