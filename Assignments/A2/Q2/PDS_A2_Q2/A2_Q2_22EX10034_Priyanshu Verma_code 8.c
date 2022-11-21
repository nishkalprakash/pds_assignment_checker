/* This program is to declare three variables in global section*/
#include <stdio.h> 
int a; char c; float f;
int main()
{    
    printf("Enter a positive integer\n");
    printf("Enter any character from the keyboard\n");
    printf("Floating point value\n");
    
    scanf("%2d ", &a );
    scanf("%c", &c );    
    scanf("%f ", &f);

    printf("positive integer: %2d\n", a);    
    printf("character from the keyboard: %c\n",c);
    printf("Floating point : %f", f);

    return 0;
}
