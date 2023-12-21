#include <stdio.h>

void print_times_table(int num) {
    int i;
    for (i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    int num;
    for (num = 3; num <= 12; num += 2) {
        print_times_table(num);
        printf("\n");
    }
    return 0;
}
