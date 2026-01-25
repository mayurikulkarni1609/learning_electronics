//C program to convert a binary number to decimal number
#include<stdio.h>
int main(){
   int decimal=0,weight=1,binary,rem;
   printf("Enter the binary number: ");
   scanf("%d",&binary);
   while(binary!=0){
       rem=binary%10;
       decimal+=rem*weight;
       binary/=10;
       weight*=2;
   }
   printf("The decimal equivalent of the entered binary digit is %d\n",decimal);
   return 0;
}