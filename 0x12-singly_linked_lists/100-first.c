#include "lists.h"

/**
 * execute_before - executes a function before main
 * Return: Always nothing
 */

void execute_before(void);

void execute_before(void) __attribute__((constructor));

void execute_before(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");
}
