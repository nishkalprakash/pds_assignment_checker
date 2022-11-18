//21BT30006
//GUNNU HEMANTH
//SEC-3

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct//structure declaration
{
    int terms;
    int coefficients[10];
    int exponents[10];
} polynomial;

polynomial check(char p1[])
{
    int COUNT = 0, i, k = 0, l = 0, n = 0;
    polynomial DATA_p1;
    for (int i = 0; p1[i] != '\0' && p1[i - 1] != '\0'; i++)
    {
        if (p1[i] == 'x')
        {
            COUNT++;
        }
    }
    DATA_p1.terms = COUNT;
    for (i = 0; p1[i] != '\0'; i++)
    {
        if ((p1[i] == 'x' && i == 0) || (p1[i] == 'x' && (p1[i - 1] == '+' || p1[i - 1] == '-')))
        {
            DATA_p1.coefficients[k] = 1;
            k++;
            if (p1[i + 1] == '^')
            {
                DATA_p1.exponents[l] = p1[i + 2];
                l++;
            }
            else
            {
                DATA_p1.exponents[l] = 1;
            }
        }
        else
        {
            DATA_p1.coefficients[k] = p1[i - 1];
            k++;
            if (p1[i + 1] == '^')
            {
                DATA_p1.exponents[l] = p1[i + 2];
                l++;
            }
            else
            {
                DATA_p1.exponents[l] = 1;
                l++;
            }
        }
    }
    for (int j = i - 1; p1[j] != '+' || p1[j] != '-'; j--)
    {
        DATA_p1.exponents[l] += p1[j] * pow(10, n);
        n++;
    }
    return (DATA_p1);
}
polynomial PRODUCT(polynomial P1, polynomial P2)//function to do product
{
    polynomial resultant;
    resultant.terms = 0;
    for (int k = 0; k < (P1.terms) * (P2.terms); k++) // (P1.terms)(P2.terms) gives us max possibility to which coefficients may require
    {
        resultant.coefficients[k] = 0;
    }
    for (int i = 0; P1.exponents[i] != '\0'; i++)
    {
        for (int j = 0; P2.exponents[j] != '\0'; j++) // for resultant we consider exponent as corresponding index of resultant.exponent[]
        {                                             // i.e.: for ith power of polynomial resultant coefficient stores in resultant.coefficient[i]
            resultant.coefficients[(P1.exponents[i]) * (P2.exponents[j])] += (P1.coefficients[i]) * (P2.coefficients[j]);
        }
    }
    for (int l = 0; l < (P1.terms) * (P2.terms); l++)
    {
        if (resultant.coefficients[l] != 0)
        {
            resultant.terms++;
        }
    }
    return (resultant);
}

int main()//main function
{
    char p1[] = {'3', 'x', '^', '2', '-', 'x', '+', '1', '0'}, p2[] = {'x', '+', '2'};
    polynomial P1, P2, resultant;
    printf("the first polynomial as string: %s", p1);
    //  function call
    P1 = check(p1);
    printf("\n\nthe second polynomial as string: ", p2);
    //  function call
    P2 = check(p2);
    resultant = PRODUCT(P1, P2);
    printf("\n\nThe resultant polynomial after multiplication in the form of string is: ");
    for (int l = 0; l < (P1.terms) * (P2.terms); l++)
    {
        printf("%d.x^%d", resultant.coefficients, resultant.exponents);
    }
    printf("\n");
    return 0;
}
