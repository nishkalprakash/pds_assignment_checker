/*
Section 2
Roll no: 22EX10002
Name: Aditya D Akolkar
Assignment No: 4
Description:Program to print Numero-Pyramid */
#include<stdio.h>
int main()
{
    int n, i, j, k, l; //program to declare integers
    printf("Enter the number of rows: ");
    scanf("%d", &n);  //user input program

    for(i=1; i<=n; i++) //program logic and output
    {
        for(k=i; k<=n-1; k++)
        {
            printf(" ");
        }
        for(j=i; j<=((2*i) -1); j++)
        {
            printf("%d", j%10);

        }
        for(l=2; l<=i; l++)
        {
            printf("%d", l%10);
        }

        printf("\n");

    }
}



