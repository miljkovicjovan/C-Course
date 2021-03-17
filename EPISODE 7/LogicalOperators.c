#include <stdio.h>

int main() {

    // creating variables for examples
    int x = 10;
    int y = 28;
    int a = 15;
    int b = 20;

    // AND operator (&&)
    if (x < y && a == b)
        printf("X is smaller than Y AND a is equal to b\n");
    
    // OR operator (||)
    if (x < y || a == b)
        printf("x is smaller than y OR a is equal to b\n");

    // NOT operator
    if (!x) 
        printf("x is not zero\n");

    return 0;
}