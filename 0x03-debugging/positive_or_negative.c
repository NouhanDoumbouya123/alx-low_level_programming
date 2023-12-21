#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints a random number decide whether that number is positive,
 * negative or zero
 *
 * Return: Always 0
 */

void positive_or_negative(int i)
{
        int n = i;

        if (n > 0)
                printf("%d is positive\n", n);
        else if (n == 0)
                printf("%d is zero\n", n);
        else
                printf("%d is negative\n", n);
	printf("\n");
}
