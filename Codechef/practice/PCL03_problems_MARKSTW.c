// Alice has scored 
// X marks in her test and Bob has scored 
// Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.


#include <stdio.h>

int main() {
    int X, Y;
    // x is alice and y is bob
    scanf("%d %d", &X, &Y);
    // check x is happy 
    if (X >= 2 * Y) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
