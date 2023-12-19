#include "main.h"

/**
 * _isalpha - to check if the character is alphabetic
 *@c: character to check
 * Return: 1 is alphabet; 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
