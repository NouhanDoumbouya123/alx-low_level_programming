#include "main.h" // Assuming necessary headers are in main.h

void print_times_table(int num) {
    // Your logic to print the times table for the given 'num'
    // For example:
    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }
}

int main() {
    print_times_table(3);
    printf("\n");
    print_times_table(5);
    printf("\n");
    print_times_table(98);
    printf("\n");
    print_times_table(12);
    return 0;
}
