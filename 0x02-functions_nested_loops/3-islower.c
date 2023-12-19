#include "main.h"

/**
 * _islower - entry point
 *@c: function that checks if a character is lowercase or not
 * Return: 0 if lowercase; 1 if else
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
