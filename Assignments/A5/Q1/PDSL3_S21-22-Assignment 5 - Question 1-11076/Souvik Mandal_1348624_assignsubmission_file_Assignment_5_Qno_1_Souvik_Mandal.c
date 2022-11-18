/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows

*/



#include <stdio.h>
void sorting(int *a, int *b, int *c);
int main()
{
    int a, b, c;
    printf("Enter three integers: ");

    // Taking input from the user
    scanf("%d %d %d", &a, &b, &c);

    // Printing before the function call

    printf("\n---Before function call----\n");
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n", &c);

    printf("Values in a, b, c = %d, %d, %d\n", a, b, c);

    // Calling the function

    sorting(&a, &b, &c);

    // Printing after the function call


    printf("\n---After function call----\n");
    printf("Address of a = %u\n", &a);
    printf("Address of b = %u\n", &b);
    printf("Address of c = %u\n", &c);
    printf("Values in a, b, c = %d, %d, %d\n", a, b, c);
    return 0;
}
void sorting(int *a, int *b, int *c)
{
    int temp;
    if (*c < *b)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    if (*b < *a)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    if (*c < *b)
    {
        temp = *b;
        *b = *c;
        *c = temp;
    }
}