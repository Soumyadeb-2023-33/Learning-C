// Task
// Submit the code present in IDE as it is.
// Read the error statement and understand what needs to be fixed.
// Fix the code so that it correctly outputs: 15
#include <stdio.h>

int main() {
   int a = 5;
   int b = 3;
   scanf("%d %d", &a, &b);  // closing bracket was missing
   printf("%d", a * b);
   return 0;
   
}

