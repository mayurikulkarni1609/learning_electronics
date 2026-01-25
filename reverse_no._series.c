//C program to reverse a series of numbers using array
#include<stdio.h>
int main()
{
    int n,a[10];
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]); }   
    for(int i=n-1;i>=0;i--){
        printf("%d ",a[i]);}
        return 0;
}

//Another type(chatgpt code)
#include <stdio.h>
#include <stdlib.h>   // for malloc and free

int main() {
    int n;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid size.\n");
        return 1; // error code
    }

    // allocate memory for n integers
    int *a = malloc(n * sizeof(int));
    if (a == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter the elements: ");
    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Invalid input.\n");
            free(a); // clean up
            return 1;
        }
    }

    printf("Reversed series: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a); // release the memory back to the system
    return 0;
}
sN