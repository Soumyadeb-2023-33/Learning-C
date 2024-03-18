// Alice has scored 
// X marks in her test and Bob has scored 
// Y marks in the same test. Alice is happy if she scored at least twice the marks of Bob’s score. Determine whether she is happy or not.


#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter Alice's score: ");
    scanf("%d", &X);
    printf("Enter Bob's score: ");
    scanf("%d", &Y);
    if (X >= 2 * Y) {
        printf("Alice is happy!\n");
    } else {
        printf("Alice is not happy.\n");
    }

    return 0;
}
