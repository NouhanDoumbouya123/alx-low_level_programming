#include "main.h"

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: the parameter, pointing to 0 and 1 chars
 * Return: converted number, or 0 if there is != 1 or 0
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int sum = 0;

	if (b == NULL)
		return 0;

	for(i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return 0;
		sum = sum * 2 + (b[i] - '0');
	}

	return sum;
}
