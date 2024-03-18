// In this challenge, you will learn simple usage of functions in C. Functions are a bunch of statements grouped together. A function is provided with zero or more arguments, and it executes the statements on it. Based on the return type, it either returns nothing (void) or something.
// Write a function int max_of_four(int a, int b, int c, int d) which reads four arguments and returns the greatest of them.
#include<stdio.h>
int max(int a,int b)
{
    if (a>b)
      return a;
    else 
      return b;
        
}

int main() {

    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max(a, b);
    int ans1=max(c,d);
    int ans2=max(ans,ans1);
    printf("%d", ans2);
    
    return 0;
}