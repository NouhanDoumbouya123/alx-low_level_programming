#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks if it is uppercase
 *
 * @c: the parameter, character to be passed
 *
 * Return: 1 if it is c; 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	return (0);
	
}
