// In the new CodeChef Learn module, under the "Learn Problem Solving" section, there are two courses for each language. 
//For eg. "Python Beginner - Part 1" and "Python Beginner - Part 2". These courses help you get started with CodeChef contests.

// Currently there are courses for 4 languages, and hence there are 8 courses in this section. But suppose there are courses for 
// N languages, what will be the total number of courses in this section?
#include <stdio.h>

int main() {
    int N;
    int total_courses = 2 * N;
    printf("%d\n", total_courses);
    return 0;
}
