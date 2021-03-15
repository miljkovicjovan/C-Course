#include <stdio.h>

int main() {

    // making variables for examples
    int x = 10;
    int y = 15;
    int a = 20;
    int b = 25;

    // example 1
    if ((x < y && a < b) && (x != b || x == 12))
        printf("Statement 1 is true\n");

    // example 2
    if (((x == 10 && x != 5)) || ((a > b) && (b == 2)))
        printf("Statement 2 is true\n");

    // example 3
    if ((((x == 10) && (b == 25)) && (x + y == b)) || (!x))
        printf("Statement 3 is true\n");

    // example 4
    if (x > b)
        printf("Statement 4.1 is true\n");
    else if (x < b)
        printf("Statement 4.2 is true\n");
    else if (x == 10)
        printf("Statement 4.3 is true\n");
    else 
        printf("None of the statements was correct\n");

    // example 5
    if (x == 10) {
        printf("Statement 5.1 is true\n");
        printf("This is how to add more to if statements!\n");
    }

    // example 6 
    x < b ? printf("Statement 6 is true\n") : printf("Statement 6 is false\n");

    // example 7
    x == 7 ? printf("Statement 7 is true\n") : printf("Statement 7 is false\n");

    return 0;
}