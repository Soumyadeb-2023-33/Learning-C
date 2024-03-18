// In ChefLand, human brain speed is measured in bits per second (bps). Chef has a threshold limit of 
// X bits per second above which his calculations are prone to errors. If Chef is currently working at 
// Y bits per second, is he prone to errors?
// If Chef is prone to errors print YES, otherwise print NO.
#include <stdio.h>

int main() {
    int X, Y;
    printf("Enter the threshold limit (X) in bps: ");
    scanf("%d", &X);
    printf("Enter Chef's current brain speed (Y) in bps: ");
    scanf("%d", &Y);
    if (Y >= X) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
