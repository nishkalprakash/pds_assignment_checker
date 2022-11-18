/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/

#include<stdio.h>


//defining the function  for the non decreasing order.
void increasingorder(int *x, int *y, int *z);

//the main function.
int main()
{
    int a, b, c; // define a ,b ,c as integer.

    int *p1, *p2, *p3;// define p1 ,p2 , p3 as pointers storing address as interger.


    // Enter the three integers to execute.
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    p1=&a;// pointer p1 storing the address of int a.
    p2=&b;// pointer p2 storing the address of int b.
    p3=&c;// pointer p3 storing the address of int c.


    // printing the addresses and values of the three integers before executing the function.
    printf("---Before function call---\n");
    printf("Address of a = %d \nAddress of b = %d \nAddress of c = %d\n", p1,p2,p3);
    printf("Values in a,b,c, = %d,%d,%d\n", a,b,c);


    //Execution of the function.
    increasingorder(p1,p2,p3);


    // printing the addresses and values of the three integers after executing the function.
    printf("---After function call---\n");
    printf("Address of a = %d \nAddress of b = %d \nAddress of c = %d\n", p1,p2,p3);
    printf("Values in a,b,c, = %d,%d,%d\n", a,b,c);



}

// Function for the non decreasing order of three integers.
void increasingorder(int *x, int *y, int *z)
{
    int temp1, temp2;// define temp1 and temp2 as integers.

    if (*y > *z)
    {
        temp2=*z;
        *z=*y;
        *y=temp2;
    }
     if (*x > *y)
    {
        temp1=*x;
        *x=*y;
        *y=temp1;
    }
}

