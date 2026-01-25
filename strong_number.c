//C program to check if the number is a strong number
#include<stdio.h>
int main(){
    int sum=0,org,n,rem,fact=1,i;
    printf("Enter n: ");
    scanf("%d",&n);
    org=n;
    while(n!=0){
        rem=n%10;
        for(i=1;i<rem-1;i++){
            fact*=i;
        }
        sum+=fact;
        fact=1;
        n/=10;
    }
    if(org==sum)
    printf("%d is a strong number\n",org);
    else
    printf("%d is not a strong number\n",org);
    return 0;
}