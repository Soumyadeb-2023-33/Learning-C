#include<stdio.h>
int main(){
    int a[10],n,i;

    printf("Enter the numbers\n");
    scanf("%d",&n);

        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        printf("Reverse order\n");
        for(int i= n-1;i>=0;i--)
        printf("%d",a[i]);
        return 0;



}