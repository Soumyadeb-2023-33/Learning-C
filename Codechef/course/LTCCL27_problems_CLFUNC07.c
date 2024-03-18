// Variable scope
// Scope in C can be broadly categorized into two types: global scope and local scope

// Global scope
// Variables and functions defined outside of any function or class have global scope.
// These entities can be accessed from anywhere in the code, both inside and outside functions or classes.
// #include <stdio.h>

// int global_var = 10;

// void my_function() {
//     printf("%d\n", global_var); // Accessing the global variable
// }

// int main() {
//     printf("%d\n", global_var); // Accessible here
//     my_function(); // Accessible here
// }
// Local scope
// Variables defined within a function have local scope, meaning they are accessible only within that function.
// Local scope is limited to the function where the variable is defined.
// #include <stdio.h>

// void my_function() {
//     int local_var = 20; // Local variable
//     printf("%d\n", local_var); // Accessible here 
// }

// int main() {
//     // Error: local_var is not defined (outside its scope)
//     printf("%d\n", local_var);
// }
// Accessing Variables from Different Scopes
// A function can access variables in its local scope, as well as variables in the global scope.
// However, a local variable will take precedence over a global variable if they have the same name.
// Review the code in the IDE and click on 'Submit' to know the result.


#include <stdio.h>
int globalVar = 10;

void myFunction() {
    int localVar = 20;
    printf("%d\n", localVar);  
    printf("%d\n", globalVar); 
}
int main() {
    myFunction();
    return 0;
}
