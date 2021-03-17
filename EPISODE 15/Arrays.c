#include <stdio.h>
 
int main () {
    
    // making the array variable
    int n[10];  // show how to use max variable dimension
                // show the limitless 
    
    // initialize elements of array n to 0         
    for ( int i = 0; i < 10; i++ ) {
        n[i] = i + 100;
    }
    
    // output each array element's value
    for ( int j = 0; j < 10; j++ ) {
        printf("Element[%d] = %d\n", j, n[j] );
    }

   return 0;
}