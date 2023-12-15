#include <stdio.h>

/**
 * main - This is a function to print all alphabets except q and e
 *
 * Return: Always (0)
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}
	putchar('\n');
	return (0);
}
