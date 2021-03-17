#include <stdio.h>

int main() {

    // created variables for the examples
    int x = 10;
    int y = 28;

    // Equal operator (==)
    if (x == y) 
        printf("Variables are equal");
    
    // Greater than operator (>)
    if (x > y) 
        printf("X is greater than Y");

    // Less than operator (<)
    if (x < y) 
        printf("X is smaller than Y");

    // Not equal operator (!=)
    if (x != y) 
        printf("Variables are not equal");

    // Greater or equal than operator (>=)
    if (x >= y) 
        printf("X is greater or equal than Y");

    // Less or equal than operator (<=)
    if (x <= y) 
        printf("X is less or equal than Y");

    return 0;
}