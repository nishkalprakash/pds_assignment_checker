/* Program to declare three variables in global section */

#include<stdio.h>

 int a; char b; float c;

int main()
{  
    printf("Enter any character: \n");
    scanf("%c", &b);
    printf("Enter integer: \n");
    scanf("%2d", &a);
    printf("Enter large decimal: \n");
    scanf("%f ", &c);
    printf("Integer entered: %2d\n character entered: %c\n Decimal value:%f",a,b,c);
      return 0;
} 

