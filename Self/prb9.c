#include<stdio.h>
int main(){
    float x;
    printf("enter the number:",x);
    scanf("%f",&x);
    int y=x;
    printf("output:%d\n",y);
    float z=x-y;
    printf("the fractional part of the real num is %f",z);
    return 0;
}