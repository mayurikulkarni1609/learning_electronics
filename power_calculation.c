//C program to calculate the power of an integer
#include<stdio.h>
#include<stdlib.h>
int main(){
    int base,exponent;
    float result=1.0;
    printf("Enter the base: ");
    scanf("%d",&base);
    printf("Enter the exponent: ");
    scanf("%d",&exponent);
   if(exponent>0){
       for(int i=1;i<=exponent;i++){
           result*=base;
       }
   }
   else{
       for(int i=exponent;i<0;i++)
       //for(int i=1;i<=abs(exponent);i++)
       {
           result*=(1.0/base);
       }
   }
    printf("Result=%.3f\n",result);
    return 0;
}