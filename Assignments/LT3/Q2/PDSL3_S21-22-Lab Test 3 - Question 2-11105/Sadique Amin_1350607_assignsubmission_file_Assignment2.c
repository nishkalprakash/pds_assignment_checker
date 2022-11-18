/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <stdio.h>
Assignment Class: 6
*/
#include <stdio.h>
#define Max 10000

struct polynomial
{
    int terms;
    int coeff[Max];
    int exp[Max];
};

struct polynomial poly[3];

int main()
{
    // INPUT THE POLYNOMIAL WITH GREATER TERMS FIRST
    // INPUT FROM USER
    for (int j = 0; j < 2; j++)
    {
        if (j == 0)
        {
            printf("FIRST POLYNOMIAL:\n ");
        }
        else
        {
            printf("SECOND POLYNOMIAL:\n ");
        }
        printf("Enter the number of terms:");
        scanf("%d", &poly[j].terms);
        printf("Enter the coeffients:\n");
        for (int i = 0; i < poly[j].terms; i++)
        {
            scanf("%d", &poly[j].coeff[i]);
        }
        printf("Enter their respective exponents, enter zero if the coefficient is associated with constant:\n");
        for (int i = 0; i < poly[j].terms; i++)
        {
            scanf("%d", &poly[j].exp[i]);
        }
    }
    // INPUT TAKEN
    int max = 0;
    for (int i = 0; i < poly[0].terms; i++) // CODE FOR MULTIPLICATION OF THE POLYNOMIALS
    {
        for (int j = 0; j < poly[1].terms; j++)
        {
            poly[2].coeff[poly[0].exp[i] + poly[1].exp[j]] = poly[0].coeff[i] * poly[1].coeff[j];
            // poly[2].coeff[i + j] = poly[0].exp[i] + poly[1].exp[j];
            if (poly[0].exp[i] + poly[1].exp[j] > max)
            {
                max = poly[0].exp[i] + poly[1].exp[j];
            }
        }
    }
    printf("The resultant polynomial after multiplication in the form of string is:\n");
    for (int i = max; i >= 0; i--)
    {
        printf("%dx^%d+", poly[2].coeff[i], i);
    }
    return 0;
}