//C program to check if a number is a perfect number or not
#include<stdio.h>
int main()
{
    int sum=0,n;
    Input:
    printf("Enter a positive integer(positive only): ");
    scanf("%d",&n);
    if(n<0||n==0)
    goto Input;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
            sum+=i;
    }
    if(sum==n)
    printf("%d is a perfect number\n",n);
    else 
    printf("%d is not a perfect number\n",n);
    return 0;
}
