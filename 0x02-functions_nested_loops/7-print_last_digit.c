#include "main.h"

/**
 * print_last_digit - prints the last digit of an integer
 *
 * @c: the number to look for the last digit
 *
 * Return: value of the last digit
 *
 */

int print_last_digit(int c)
{
	int last_digit;

	last_digit = c % 10;

	_putchar(last_digit + '0');
	return (c);
}
