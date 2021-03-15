// added spaces 
// added blank lines
// added better variable names

// all of this is for better program organization

#include <stdio.h>

int main () {

    // user inputted numbers
    int FirstNumber, SecondNumber;

    // result of the calculation
    int result;

    // user choice
    int option;

    // menu
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    // choose an operation
    printf("Choose an option (1-4): ");
    scanf("%d", &option);

    // choose numbers
    printf("Enter the two numbers: ");
    scanf("%d%d", &FirstNumber, &SecondNumber);

    // calculate
    if (option == 1)
        result = FirstNumber + SecondNumber;
    else if (option == 2)
        result = FirstNumber - SecondNumber;
    else if (option == 3)
        result = FirstNumber * SecondNumber;
    else if (option == 4)
        result = FirstNumber / SecondNumber;

    // display the result
    printf("The result of the calculation is: %d", result);

    return 0;
}