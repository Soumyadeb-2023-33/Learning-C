    // Functions continued
    // In the previous task you had to compute the square and cube of each number. This can get very long if you have more numbers.

    // Functions allow you to break down a complex program into smaller, manageable modules.
    // Each function can represent a specific task or functionality.
    // Once defined, functions can be reused in different parts of the program or even in different programs, promoting code reuse and saving development time.
    #include <stdio.h>
int calculateC(int A, int B) {
    return A * A + 2 * A * B + B * B;
}
int calculateD(int A, int B) {
    return A + B;
}

int main() {
    for (int i = 0; i < 3; i++) {
        int A, B;
        scanf("%d %d", &A, &B);
        int C = calculateC(A, B);
        int D = calculateD(A, B);

        printf("%d\n", C);
        printf("%d\n", D);
    }

    
}


