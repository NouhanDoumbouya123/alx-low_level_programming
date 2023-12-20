#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - natural numbers to 98
 *
 * @n: the number passed to the function
 *
 * Description: this function prints all the natural numbers from n to 98
 *
 * Return: Always 0
 */

void print_to_98(int n)
{

	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	else if (n == 98)
	{
		printf("%d", n);
	}
	else
	{
		for (;  n >= 98; n--)
		{
			printf("%d", n);
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
