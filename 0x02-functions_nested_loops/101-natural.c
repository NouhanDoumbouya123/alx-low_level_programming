#include <stdio.h>

/**
 * sum_multiples_3_5 - Computes the sum of multiples of 3 or 5 below a given limit
 * @limit: The upper limit (exclusive) for finding multiples
 *
 * Return: The sum of multiples of 3 or 5 below the given limit
 */
int sum_multiples_3_5(int limit)
{
	int total = 0;
	int num;

	for (num = 0; num < limit; num++)
	{
		if (num % 3 == 0 || num % 5 == 0)
		{
			total += num;
		}
	}
	return total;
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int limit = 1024;
	int result = sum_multiples_3_5(limit);

	printf("%d\n", result);

	return (0);
}
