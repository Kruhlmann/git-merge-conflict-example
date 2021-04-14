#include <stdio.h>

void print_fibonacci_numbers(int n) {
    int nextTerm;
    int t1;
    int t2 = 1;

    for (int i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
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
