#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and check if success
 * @b: the parameter
 * Return: if fails, it should return exit(98)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(unsigned int));
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
