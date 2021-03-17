#include <stdio.h>

int main() {

    // making variables
    char choice;

    // taking input
    printf("Make a choice from a to e: ");
    scanf("%c", &choice);

    // switch statement
    switch (choice) {
        case 'a': printf("You chose a"); break;
        case 'b': printf("You chose b"); break;
        case 'c': printf("You chose c"); break;
        case 'd': printf("You chose d"); break;
        case 'e': printf("You chose e"); break;
        default: printf("Out of bounds");
    }
        
    return 0;
}