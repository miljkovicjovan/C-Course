#include <stdio.h>
 
int main () {

   // making an array variable
   int n[5][2] = { {0,0}, {1,2}, {2,4}, {3,6},{4,8}}; 
 
   // output each array element's value 
   for ( int i = 0; i < 5; i++ ) {
      for ( int j = 0; j < 2; j++ ) {
         printf("a[%d][%d] = %d\n", i,j, n[i][j] );
      }
   }
   
   return 0;
}