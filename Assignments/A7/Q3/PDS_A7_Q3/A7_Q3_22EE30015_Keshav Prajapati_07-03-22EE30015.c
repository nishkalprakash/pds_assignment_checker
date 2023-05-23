/*
Section 2
Roll no. 22EE30015
Name : Keshav Prajapati
Assignment No. 7
Description :
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num1, num2;
    int **Xarr, **Yarr;


    //Array X
    printf("Enter the number of names you want to enter : ");
    scanf("%d", &num1);

    //Allocating Mem
    Xarr = (char **) malloc(num1*sizeof(char*));

    for (int i = 0; i < num1; i++)
        {
            Xarr[i] = (int *) malloc(sizeof(char));
        }

    // Taking input


    //Array Y
    printf("Enter the number of names you want to enter : ");
    scanf("%d", &num1);

    Yarr = (char **) malloc(num2*sizeof(char*));

    for (int i = 0; i < num2; i++)
        {
            Xarr[i] = (int *) malloc(sizeof(char));
        }


    //Output
    printf("Printing %d names stored in X", num1);

    printf("Printing %d names stored in Y", num2);
}
