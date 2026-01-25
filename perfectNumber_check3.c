#include <stdio.h>

int main() {
    int n, sum, choice;

    do {
        sum = 0;
        printf("Enter a positive integer (positive only): ");
        scanf("%d", &n);

        if (n < 0) {
            printf("Invalid input! Try again.\n");
        } else {
            for (int i = 1; i <= n / 2; i++) {
                if (n % i == 0)
                    sum += i;
            }

            if (sum == n)
                printf("%d is a perfect number\n", n);
            else
                printf("%d is not a perfect number\n", n);
        }

        printf("\nDo you want to check another number? (1 = Yes, 0 = No): ");
        scanf("%d", &choice);

    } while (choice == 1);

    printf("Goodbye!\n");
    return 0;
}
