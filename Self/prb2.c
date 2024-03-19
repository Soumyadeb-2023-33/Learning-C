#include <stdio.h>

int replace_zeros_with_ones(int num) {
    int result = 0;
    int power = 1;
    while (num != 0) {
        int digit = num % 10;
        if (digit != 0) {
            result += digit * power;
        } else {
            result += 1 * power;
        }
        power *= 10;
        num /= 10;
    }
    return result;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    int replaced = replace_zeros_with_ones(num);
    printf("The number with all 0's replaced with 1's is %d\n", replaced);
    return 0;
}