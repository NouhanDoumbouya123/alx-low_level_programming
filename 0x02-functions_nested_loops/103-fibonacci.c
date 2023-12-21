#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Calculates the sum of even-valued terms in the Fibonacci sequence
 *              up to a limit of 4,000,000
 *
 * Return: Always 0
 */
int main(void)
{
	int i = 0;
	long j = 1, k = 2, sum = 0; /* Initialize sum to 0 */

	while (k <= 4000000) /* Check for limit of 4,000,000 */
	{
		if (k % 2 == 0) /* Check if 'k' is even */
			sum += k;   /* Add 'k' to the sum of even-valued terms */

		k += j;
		j = k - j;
		++i;
	}

	printf("%ld\n", sum); /* Print the sum followed by a new line */
	return (0);
}
