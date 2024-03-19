// add n numbers
#include<stdio.h>
int main(){
int n, count;
count=0;
printf("enter n ");
scanf("%d",&n);
for(int i=0;i<=n;i++){
    count=count+i;
}
printf("%d",count);
return 0;

}