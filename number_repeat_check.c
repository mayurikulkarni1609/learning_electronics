//C program to check if a number is repeated in a digit
#include <stdio.h>

int main() {
  int seen[10]={0};
  int N,rem;
    printf("Enter the digit(N): ");
    scanf("%d",&N);
    while(N>0){
        rem=N%10;
        if(seen[rem]==1)
        break;
        seen[rem]=1;
        N/=10;
    }
    if(N>0)
    printf("YES\n");
    else
    printf("NO");

    return 0;
}