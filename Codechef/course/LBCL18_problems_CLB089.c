// Write a program which does the following

// Create a string array for the following values "Monday", "Tuesday", "Wednesday", and "Thursday"
// Output the last two elements of the array on separate lines
#include <stdio.h>

int main() {

  char week[4][10] = {"Monday", "Tuesday", "Wednesday", "Thursday"};
  printf("%s\n", week[ 2 ]);
  printf("%s", week[ 3 ]);
  return 0;

  
}
