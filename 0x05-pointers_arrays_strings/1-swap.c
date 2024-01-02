#include "main.h"

/**
 * swap_int - a function that swap two values
 *
 * @a: the first parameter of the function
 * @b: the second parameter of the function
 *
 * Return: Always 0
 *
 */

void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
