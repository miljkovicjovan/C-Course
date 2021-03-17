#include <stdio.h>

int main() {

    // making variables
    int choice;

    // taking input
    printf("Make a choice from 1 to 5: ");
    scanf("%d", &choice);

    // switch statement
    switch (choice) {
        case 1: printf("You chose 1"); break;
        case 2: printf("You chose 2"); break;
        case 3: printf("You chose 3"); break;
        case 4: printf("You chose 4"); break;
        case 5: printf("You chose 5"); break;
    }
        
    return 0;
}