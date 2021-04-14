#include <stdio.h>

int fibbonacci(int n) {
    if (n <= 1) {
        return n;
    }
    return fibbonacci(n - 1) + fibbonacci(n - 2);
}

void print_fibonacci_numbers(int n) {
    for (int i = 1; i <= n; ++i) {
        printf("%d, ", fibbonacci(i));
    }
    printf("\n");
}

int get_int_std_in() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series: ");
    return n;
}

int main() {
    int n = get_int_std_in(n);
    print_fibonacci_numbers(n);
    return 0;
}
