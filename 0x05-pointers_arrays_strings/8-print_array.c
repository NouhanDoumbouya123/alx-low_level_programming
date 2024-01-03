#include "main.h"

/**
 * print_array - prints an array
 * @a: the first parameter
 * @n: the number of element in the array
 * Return: void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");
}
