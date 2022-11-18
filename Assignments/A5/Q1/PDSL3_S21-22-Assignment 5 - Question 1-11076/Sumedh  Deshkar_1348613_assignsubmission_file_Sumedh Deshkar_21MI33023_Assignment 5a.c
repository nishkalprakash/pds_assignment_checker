/*
Name - Sumedh Deshkar
Roll no. - 21MI33023
Sec - 3
Assignment 5a
*/

#include <stdio.h>
void Non_dcrease(int*a,int*b,int*c) // make a funcion
{
    int max2, max3 , max_sec; // defining variables
    int min2 , min3;          // defining variables
    max2=(*a>*b)?*a:*b;    // find maximum of 2 integers
    max3=(*c>max2)?*c:max2;  // find maximum of all 3 integers
    *c=max3;   // assigning valus
    min2=(*a<*b)?*a:*b;     // find minimum of 2 integers
    *a=min2;                // assigning valus
    min3=(*c<min2)?*c:min2; //find minimum of all 3 integers
    max_sec=(*a >*b)?((*a>*c)?((*b>*c)?*b:*c):((*a>*b)?*a:*c)):((*b>*c)?((*a>*c)?*a:*c):((*a>*b)?*a:*b));
    //find Second maximum number
    *b=max_sec;           // assigning valus


}
// write main function
int main()
{
    // defining variables
    int a;
    int b;
    int c;
    printf("Enter three integers : ");
    scanf("%d %d %d",&a,&b,&c); // taking input from user
    // print output before functioning call
    printf("\n----Before function call----\n");
    printf("Address of a = %u",&a);
    printf("\nAddress of b = %u",&b);
    printf("\nAddress of c = %u",&c);
    printf("\nValue in a,b,c = %d,%d,%d\n",a,b,c);
    Non_dcrease(&a,&b,&c);     // call the function
    // print output after functioning call
    printf("\n----After function call----\n");
    printf("Address of a = %u\n",&a);
    printf("Address of b = %u\n",&b);
    printf("Address of c = %u\n",&c);
    printf("\nValue in a,b,c = %d,%d,%d \n",a,b,c);
    return 0;
}
