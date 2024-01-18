#include "main.h"

/**
 * malloc_checked - allocates memory using malloc and check if success
 * @b: the parameter
 * return: if fails, it should return exit(98)
 */

void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b * sizeof(int));
	if (ptr == NULL)
	{
		exit(98);
	}
	else
		return (ptr);
}
