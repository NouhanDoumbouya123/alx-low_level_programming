#include <stdio.h> // Include necessary header file for printf

void print_times_table(int num) {
    int i; // Declare 'i' outside the loop due to C90 standard
    for (i = 1; i <= 10; i++) {
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
