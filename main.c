#include <stdio.h>

long binomial_iterative(long n, long k);
long binomial_recursive(long n, long k);
int main() {
    printf("Hello, World!\n");
    printf("iterative %ld",binomial_iterative(1,2));
    printf("recursive %ld",binomial_iterative(1,2));

    return 0;

}


long binomial_iterative(long n, long k) {
    long nFactorial = 1;
    for (int i = 1; i <= n; ++i) {
        nFactorial *= i;
    }
    long kFactorial = 1;
    for (int i = 1; i <= n; ++i) {
        kFactorial *= i;
    }
    long n_k_difference_factorial = 1;
    for (int i = 1; i <= n - k; ++i) {
        n_k_difference_factorial *= i;
    }
    return (nFactorial) / (kFactorial * n_k_difference_factorial);
}

long binomial_recursive(long n, long k) {
    if (k > n) {
        return 0;
    }
    if (k == 0 || k == n) {
        return 1;
    }
    return binomial_recursive(n - 1, k - 1)
           + binomial_recursive(n - 1, k);
}
