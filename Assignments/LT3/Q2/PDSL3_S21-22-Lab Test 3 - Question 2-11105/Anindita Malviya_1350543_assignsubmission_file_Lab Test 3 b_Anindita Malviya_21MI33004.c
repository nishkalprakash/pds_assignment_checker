/*
Anindita Malviya
21MI33004
Section3
Code blocks
Question 2
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<ctype.h>

void Polynomial(char S[],int x);

int main()
{
    char P1[100],P2[100];
    printf("Enter the 1st polynomial: ");
    scanf("%s",P1);
    printf("Enter the 2nd polynomial: ");
    scanf("%s",P2);
    int m = strlen(P1);
    int n = strlen(P2);

    Polynomial(P1,m);
    Polynomial(P2,n);



}

void Polynomial(char S[],int x)               //finding coeff. and exponents of the polynomial
{
    int terms = 1;
    for (int i = 0; i < x; i++)
    {
        if (S[i] == '+' || S[i] == '-')
        {
            terms++;
        }
    }
    printf("Terms in the polynomial is %d\n",terms);
    int A[terms],B[terms];                                     //Arrays of coeff and exponents
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < terms; j++)
        {
            if(isalpha(S[i-1]))
            {
            if(S[i] == '^')
            {
                B[j] = S[i+1];
            }
            else
            {
                B[j] = 1;
            }
            }
            else if(S[i-1] == '+' || S[i-1] == '-')
            {
                if(!isalpha(S[i]))
                {
                    B[j] = 0;
                }
            }

        }
    }
    printf("Exponents: ");
    for ( int j = 0; j < terms; j++)
    {
        printf("%d, ",B[j]);
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < terms; j++)
        {
            if(isalpha(S[i]))
            {
                if(isdigit(S[i-1]))
                {
                    A[j] = S[i-1];
                }
                else if (!isdigit(S[i-1]))
                {
                        A[j] = 1;
                }
            }
        }
    }
    printf("Coefficients: ");
    for ( int j = 0; j < terms; j++)
    {
        printf("%d, ",A[j]);
    }

}
