// Task
// Given a program to check whether a number is greater then 5 or not.

// Run the code without changing anything, it will give wrong answer.
// Find the wrong condition and correct it.
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n > 5) {
        printf("the number is greater than 5");
    } else {
        printf("the number is smaller than or equal to 5");
    }

    return 0;
}