//simple interest     
#include<stdio.h>
int main(){
    float p,r,t,SI;
   printf("enter the value of\npricipal\nrate\ntime\n:",p,r,t);
   scanf("%f%f%f",&p,&r,&t);
   SI=(p*r*t)/100;
   printf("The Simple Interest will be:%f",SI);
    return 0;
} 