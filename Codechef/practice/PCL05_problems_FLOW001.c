// Add Two Numbers
// Your task is very simple: given two integers 
// �
// A and 
// �
// B, write a program to add these two numbers and output the sum.

// Input Format
// The first line contains an integer 
// �
// T, the total number of test cases.
// Then follow 
// �
// T lines, each line contains two integers, 
// �
// A and 
// �
// B.
// Output Format
// For each test case, add 
// �
// A and 
// �
// B and display the sum in a new line.


#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T); 
    while (T--) {
        int A, B;
        scanf("%d %d", &A, &B); 
        int sum = A + B;
        printf("%d\n", sum);
    }
    return 0;
}
