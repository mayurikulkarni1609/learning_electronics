//C program to add two numbers without using '+' operator
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the values of a and b respectively: ");
    scanf("%d%d",&a,&b);
    while(b!=0){
        a++;
        b--;
    }
    printf("The sum is %d\n",a);
    return 0;
}