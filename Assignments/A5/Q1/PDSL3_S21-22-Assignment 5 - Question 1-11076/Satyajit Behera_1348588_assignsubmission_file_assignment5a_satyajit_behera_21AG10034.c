// NAME- SATYAJIT BEHERA
// ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include <stdio.h>
// function  for interchanging the number or swaping the number
void interchange(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
// function for arranging in  the non decreasing form

void arrange_none_decreasing_form(int *point1, int *point2, int *point3)
{
    // checking the greatest number
    if (*point1 > *point2 && *point1 > *point3)
    {

        if (*point2 > *point3)
        {
            // point3 point2 point1
            interchange(point1, point3);
        }
        else
        {
            // point2 point3 point1
            interchange(point1, point2);
            interchange(point2, point3);
        }
    }
    else if (*point2 > *point1 && *point2 > *point3)
    {
        if (*point1 > *point3)
        {
            // point3 point1 point2
            interchange(point2, point3);
            interchange(point1, point2);
            // 3 2 1
        }
        else
        {
            // point1 point3 point2
            interchange(point2, point3);
        }
    }

    else // point3 is largest
    {
        if (*point1 > *point2)
        {
            // point2 point1 point3
            interchange(point1, point2);
        }
    }
}

int main()
{
    // initializing the variables
    int A, B, C, *point1, *point2, *point3;
    // taking the inputs from the user
    printf("Enter A : ");
    scanf("%d", &A);
    printf("Enter B : ");
    scanf("%d", &B);
    printf("Enter C : ");
    scanf("%d", &C);
    // assigning the address of variables
    point1 = &A;
    point2 = &B;
    point3 = &C;

    //   printing the the address of variables
    printf("Address of A = %u\n", point1);
    printf("Address of B = %u\n", point2);
    printf("Address of C = %u\n", point3);
    printf("Values of A, B, C = %d, %d, %d\n", A, B, C);
    // calling the function arrange_none_decreasing_form
    arrange_none_decreasing_form(point1, point2, point3);

    printf("Address of A = %u\n", point1);
    printf("Address of B = %u\n", point2);
    printf("Address of C = %u\n", point3);
    // printing the number in non decreasing format
    printf("Values of A, B, C = %d, %d, %d\n", A, B, C);

    return 0;
}
