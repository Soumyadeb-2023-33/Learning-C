//remainder
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter Dividend:");
    scanf("%d",&a);
    printf("Enter Divisor:");
    scanf("%d",&b);
    //int q=a/b;
    //int r=a-b*q; //Divisor*Quotient+remainder=divident
    //printf("the remainder when %d is divided by %d is : %d",a,b,r);
    int r=a%b;
    printf("the remainder when %d is divided by %d is : %d",a,b,r);
    return 0;
}