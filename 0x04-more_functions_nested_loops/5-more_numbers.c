#include "main.h"

/**
 * more_numbers - print numbers from 0 to 14 ten times
 *
 * Return: Always (0)
 */

void more_numbers(void)
{
	int i, j, digits;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if( j >= 10)
			{
				_putchar(j / 10 + '0');
				_putchar(j % 10 + '0');
			}
			else
				_putchar(j + '0');
		}
		_putchar('\n');
	}
}