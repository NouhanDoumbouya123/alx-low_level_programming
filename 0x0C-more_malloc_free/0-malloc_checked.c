#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and check if success
 * @b: the parameter
 * Return: if fails, it should return exit(98)
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
