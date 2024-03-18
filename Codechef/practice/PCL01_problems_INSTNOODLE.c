// Chef and Instant Noodles
// Chef has invented 1-minute Instant Noodles. As the name suggests, each packet takes exactly 1 minute to cook.

// Chef's restaurant has 
// X stoves and only 1 packet can be cooked in a single stove at any minute.

// How many customers can Chef serve in 
// Y minutes if each customer orders exactly 
// 1
// 1 packet of noodles?

// Input Format
// The first and only line of input contains two space-separated integers 
// X and 
// Y — the number of stoves and the number of minutes, respectively.

// Output Format
// Print a single integer, the maximum number of customers Chef can serve in Y minutes

#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the number of stoves: ");
    scanf("%d", &X);
    printf("Enter the number of minutes: ");
    scanf("%d", &Y);
    int customers_served = X * Y;
    printf("Chef can serve %d customers in %d minutes.\n", customers_served, Y);
    
    return 0;
}
