#include <stdio.h>

int main() {

    // we create the variables
    char character = 'C';
    int integer = 10;
    float floatingNumber = 3.14;
    double doubleFloat = 3.14;

    // printing character
    printf("The character: %c\n", character);

    // printing integer 
    printf("The integer: %d\n", integer);

    // printing float
    printf("The float: %f", floatingNumber);

    // printing double
    printf("The double: %lf", doubleFloat);

    // example 2
    printf("The character is: %c\nThe integer is: %d\nThe floating point number: %f\nThe double floating point number: %lf\n", character , integer, floatingNumber, doubleFloat);

    return 0;
}