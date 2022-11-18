/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/
#include <stdio.h>

void Sorting(int *x, int *y, int *z);

int main()
{
    int a, b, c;
    printf("Enter the value of variable a : ");
    scanf("%d", &a);
    printf("Enter the value of variable b : ");
    scanf("%d", &b);
    printf("Enter the value of variable c : ");
    scanf("%d", &c);
    printf("\n---Before function call----\n");
    printf("Address of a = %d\n", &a);
    printf("Address of b = %d\n", &b);
    printf("Address of c = %d\n", &c);
    printf("Values in a, b, c = %d, %d, %d\n", a, b, c);
    Sorting(&a, &b, &c);
    printf("\n---After function call----\n");
    printf("Address of a = %d\n", &a);
    printf("Address of b = %d\n", &b);
    printf("Address of c = %d\n", &c);
    printf("Values in a, b, c = %d, %d, %d", a, b, c);
    return 0;
}
void Sorting(int *x, int *y, int *z)
{
    int temp1, temp2, temp3;
    if (*x > *y && *x > *z)
    {
        temp1 = *x;
        if (*y > *z)
        {
            temp2 = *y;
            temp3 = *z;
        }
        else
        {
            temp2 = *z;
            temp3 = *y;
        }
    }
    else if (*y > *y && *x > *z)
    {
        temp1 = *y;
        if (*x > *z)
        {
            temp2 = *x;
            temp3 = *z;
        }
        else
        {
            temp2 = *z;
            temp3 = *x;
        }
    }
    else
    {
        temp1 = *z;
        if (*x > *y)
        {
            temp2 = *x;
            temp3 = *y;
        }
        else
        {
            temp2 = *y;
            temp3 = *x;
        }
    }
    *x = temp3;
    *y = temp2;
    *z = temp1;
}