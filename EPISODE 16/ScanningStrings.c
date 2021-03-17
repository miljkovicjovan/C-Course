#include <stdio.h>

int main () {
    
    // making the string variables
    char str1[12];
    
    // scanning the string
    printf("What is your name? ");
    scanf("%s", str1);

    // printing
    printf("\nHello %s!", str1);
    
   return 0;
}