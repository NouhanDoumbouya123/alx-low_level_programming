#include "main.h"

/**
 * _abs - absolute value
 *
 * @c: integer
 *
 *Description: This function prints the absolute value of an integer
 *
 * Return: Always an integer
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);

}
