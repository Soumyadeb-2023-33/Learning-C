// Parameters, Arguments
// Note that there is a difference between Parameters and Arguments.

// Parameters are the variables that are listed as part of the method definition. They act like placeholders for the values that the method can accept.

// Arguments are the actual values which are passed to the method when you call it.

// Check the code template below

// a, b are parameters inside the function
// 3, 5 are arguments passed to the function
// #include <stdio.h>

// int add_numbers(int a, int b) {
//     return a + b;
// }

// int main() {
//     // Calling the function with arguments 3, 5
//     int result = add_numbers(3, 5);
//     printf("Sum: %d\n", result);
// }
// Task
// The code given in the IDE is incorrect.
// Can you debug the code to give the correct output?
// Check the input and expected output below.

#include <stdio.h>

void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    char name[] = "Alice";
    greet(name);
}