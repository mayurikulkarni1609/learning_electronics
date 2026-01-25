// C program to check if a number is prime or not
#include <stdio.h>

int main() {
    int n, i, isPrime = 1;
    printf("Enter n: ");
    scanf("%d", &n);

    if (n < 2) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break; // no need to keep checking
            }
        }
    }

    if (isPrime)
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);

    return 0;
}
