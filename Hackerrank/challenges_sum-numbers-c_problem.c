// The fundamental data types in c are int, float and char. Today, we're discussing int and float data types.

// The printf() function prints the given statement to the console. The syntax is printf("format string",argument_list);. In the function, if we are using an integer, character, string or float as argument, then in the format string we have to write %d (integer), %c (character), %s (string), %f (float) respectively.

// The scanf() function reads the input data from the console. The syntax is scanf("format string",argument_list);. For ex: The scanf("%d",&number) statement reads integer number from the console and stores the given value in variable .

// To input two integers separated by a space on a single line, the command is scanf("%d %d", &n, &m), where  and  are the two integers.

// Task

// Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

// Declare  variables: two of type int and two of type float.
// Read  lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your  variables.
// Use the  and  operator to perform the following operations:
// Print the sum and difference of two int variable on a new line.
// Print the sum and difference of two float variable rounded to one decimal place on a new line.
#include<stdio.h>
int main()
{
    int m, n;
    float a, b;
    scanf("%d %d", &m, &n);
    scanf("%f %f", &a, &b);
    
    printf("%d %d", m+n, m-n);
    printf("\n");
    printf("%.1f %.1f", a+b, a-b);
    return 0;
}