#include <stdio.h>

/**
 * main - prints the alphabets in lower and uppercase
 *
 * Return: Always (0)
 */
int main(void)
{
	char letters;

	for (letters = 'a'; letters <= 'z'; letters++)
		putchar(letters);
	for (letters = 'A'; letters <= 'Z'; letters++)
		putchar(letters);
	putchar('\n');
	return (0);
}
