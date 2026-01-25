// C program to add two numbers without using '+' operator
#include <stdio.h>

int main() {
    int a, b;
    printf("Enter the values of a and b respectively: ");
    scanf("%d%d", &a, &b);

    while (b != 0) {
        int carry = a & b;   // find common set bits (carry)
        a = a ^ b;           // add without carry
        b = carry << 1;      // shift carry left and add in next round
    }

    printf("The sum is %d\n", a);
    return 0;
}
