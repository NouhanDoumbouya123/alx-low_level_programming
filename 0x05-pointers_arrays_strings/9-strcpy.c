#include "main.h"

/**
 * _strcpy - copy the content of source to the destination
 * @dest: the first parameter and the destination
 * @src: the second and the source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i] = '\0';
	return (dest);
}
