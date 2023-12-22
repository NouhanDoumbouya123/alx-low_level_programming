#include <stdio.h>

/**
 * main - prints from 1 to 100 with replacement
 *
 * Return: Always (0)
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" ");
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" ");
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" ");
			printf("Buzz");
		}
		else
		{
			printf(" ");
			printf("%d", i);
		}
	}
	printf("\n");
	return (0);
}
