#include <stdio.h>

int main () {
    int x,y,z,a;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Choose an option (1-4): ");
    scanf("%d",&a);
    printf("Enter the two numbers: ");
    scanf("%d%d",&x,&y);
    if (a==1)
        z=x+y;
    else if (a==2)
        z=x-y;
    else if (a==3)
        z=x*y;
    else if (a==4)
        z=x/y;
    printf("The result of the calculation is: %d",z);
    return 0;
}