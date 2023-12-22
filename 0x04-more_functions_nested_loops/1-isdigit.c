#include "main.h"

/**
 * _isdigit - checks if it is a digit or not
 *
 * @c: the parameter for the value of a number
 *
 * Return: if c is digit 1; 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
