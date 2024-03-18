// Write a program that takes a number N as the input, and prints it to the output.
#include <stdio.h>

int main() {
    int N;

    printf("Enter a number: ");

    // reads the user input stores in 'N'
    scanf("%d", &N);

    // print the 'N'
    printf("The number you entered is: %d", N);

    return 0;
}