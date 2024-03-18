#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the numbers:");
    scanf("%d %d",&x,&y);
    printf("additon:%d\nsubtraction:%d\nmultiplication:%d\ndivision:%f",x+y,x-y,x*y,(float)x/(float)y);
    return 0;
}