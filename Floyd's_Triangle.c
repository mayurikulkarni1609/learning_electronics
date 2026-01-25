//C program to print Floyd's triangle
#include<stdio.h>
int main(){
    int n=1,j,i,rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++){
        for(j=1;j<=i;j++){ //because row number=number of columns
            printf("%d ",n);
            n++;
        }
        printf("\n"); //next line after every row
    }
    return 0;
}