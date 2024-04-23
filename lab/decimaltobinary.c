#include<stdio.h>
int main(){
    int a[20],i,m,n,r;
    printf("Enter Decimal number");
    scanf("%d",&n);
    m=n;
    for(i=0;n>0;i++){
    r=n%2;
    a[i]=r;
    n=n/2;
    }
    printf("Binary equivalent of %d",m);
    for (i--; i>=0; i--)
    printf("%d",a[i]);
    return 0;
    
}