#include <stdio.h>

/**
 * main - print all the possible combinations of single digits numbers
 *
 * Return: Always (0)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + '0');
	if (n == 9)
		break;
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
