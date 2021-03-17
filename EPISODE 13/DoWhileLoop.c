#include <stdio.h>

int main() {

    // making variables
    int number = 0;

    // do while loop
    do {
        printf("Number is %d\n", ++number);
    }
    while (number < 5);
        
    return 0;
}