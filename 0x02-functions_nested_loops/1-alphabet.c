#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - a fuction that writes the letters in lower cases to the standard output
 * 
 * Return: Always (0)
 */

void print_alphabet(void)
{
	int i;
	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
}
