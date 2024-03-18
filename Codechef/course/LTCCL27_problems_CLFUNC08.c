// Function within a function
// In C, you can call functions within other functions. These functions can call other functions at any level of nesting or independently.

// Check the sample code given below

// #include <stdio.h>

// // Function to calculate the square of a number
// int square(int a) {
//     return a * a;
// }

// // Function to calcuate (a + b) ^ 2
// int aPlusBSquare(int a, int b) {
//     return square(a) + 2 * a * b + square(b);
// }

// int main() {
//     int result = aPlusBSquare(1, 2);

//     printf("Result: %d\n", result);
// }

// // Output
// // Result: 9
// Task
// You are given a code in the IDE. Complete the aMinusBSquare function by calling the square function inside it.

// The formula for finding 
// (
// �
// −
// �
// )
// 2
// =
// �
// 2
// −
// 2
// �
// �
// +
// �
// 2
// (a−b) 
// 2
//  =a 
// 2
//  −2ab+b 
// 2



#include <stdio.h>
int square(int a) {
    return a * a;
}
int aMinusBSquare(int a, int b) {
    return square(a) - 2 * a * b + square(b);
}

int main() {
    int result = aMinusBSquare(2, 1);
    printf("Result: %d\n", result);
    return 0;
}
