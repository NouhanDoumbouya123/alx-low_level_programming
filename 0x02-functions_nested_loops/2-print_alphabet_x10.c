#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - prints the alphabets in lowercases 10 times
 *
 * Return: Always (0)
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			putchar(j);
		putchar('\n');
	}
}
