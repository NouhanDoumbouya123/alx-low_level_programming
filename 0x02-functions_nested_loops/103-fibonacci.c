#include <stdio.h>

int main(void)
{
    int i = 0;
    long j = 1, k = 2, sum = 0;

    while (k <= 4000000)
    {
        if (k % 2 == 0)
            sum += k;

        k += j;
        j = k - j;
        ++i;
    }

    printf("%ld\n", sum);
    return (0);
}
