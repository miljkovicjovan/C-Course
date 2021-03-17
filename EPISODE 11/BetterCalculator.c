// added an error for when user doesnt enter 1-4
// fixed the result of the division to be float

// so now the erro is shown and the result of a division is a float

#include <stdio.h>

int main () {

    // user inputted numbers
    int FirstNumber, SecondNumber;

    // result of the calculation
    int result;
    float resultFloat;

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

    // calculations
    if (option == 1 || option == 2 || option == 3) { // when the result will be int 
    
    // choose numbers
    printf("Enter the two numbers: ");
    scanf("%d%d", &FirstNumber, &SecondNumber);
    
        if (option == 1)
            result = FirstNumber + SecondNumber;
        else if (option == 2)
            result = FirstNumber - SecondNumber;
        else if (option == 3)
            result = FirstNumber * SecondNumber;
        
        // displaying the result
        printf("The result of the calculation is: %d", result);
    }
    else if (option == 4) {
        
        // choose numbers
        printf("Enter the two numbers: ");
        scanf("%d%d", &FirstNumber, &SecondNumber);
    
        resultFloat = (float) FirstNumber / SecondNumber;
        
        // displaying the result
        printf("The result of the calculation is: %f", resultFloat);
    }
    else // when the choice of options is wrong
        printf("Wrong Input");

    return 0;
}