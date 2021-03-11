#include <stdio.h>

int main() {
    // make two variables with a value of 5
    int x = 5, y = 5;

    // x is displayed
    // Then, x is increased to 6.
    printf("The postfix: %d\n", x++);

    // y is increased to 6 
    // Then, y is displayed.
    printf("The prefix: %d\n", ++y);

    return 0;
}