/*
Name:Biswaranjan Samal
Roll no: 21IM10011
Dept: Industrial and Systems Engineering
Package: Codeblocks
Assignment:,Question
*/

#include<stdio.h>
#include<stdlib.h>

typedef struct _poly  //structure for polynomial and other defining informations
{
    int terms;
    int *coefficient,*exponent;
} poly;

poly extraction(char *polynomial)   //extracts the coefficient with sign from the string
                                    // so that we can manipulate it for multiplication
{
    poly result;
    int i,terms = 1;
    for(i = 0; polynomial[i] != '\0'; i++)
    {
        if(polynomial[i] == '+' || polynomial[i] == '-')
            terms++;
    }
    result.terms = terms;
    result.coefficient = (int*)malloc(terms*sizeof(int)); //allocation of required  memory from heap for storing coefficent,exponent
    result.exponent = (int*)malloc(terms*sizeof(int));

    i = 0;
    int index = 0;
    int degree = 0,coeff = 0,sign = 1;
    while(polynomial[i] != '\0') //checks till end of string
    {
        if(polynomial[i] == 'x')
        {
            while(polynomial[i] != '+' && polynomial[i] != '-' && polynomial[i] != '\0') //checks for extraction of coefficient whileit
                                                                                        //encounters + - sign
            {
                if(polynomial[i] >= '0' && polynomial[i] <= '9')
                    degree = degree*10 + (polynomial[i]-'0');
                i++;
            }
            if(degree == 0)
                degree++;
            if(coeff == 0)
                coeff++;
        }
        else if(polynomial[i] == '+' || polynomial[i] == '-')
        {
            result.coefficient[index] = sign*coeff;
            result.exponent[index] = degree;
            index++;
            if(polynomial[i] == '+')
                sign = 1;
            if(polynomial[i] == '-')
                sign = -1;
            degree = 0;
            coeff = 0;
            i++;
        }
        else
        {
            coeff = coeff*10 + (polynomial[i] - '0');
            i++;
        }
    }
    result.coefficient[index] = sign*coeff;
    result.exponent[index] = degree;
    return result;
}

int main()
{   //calling function
    char polynomial1[1000];
    char polynomial2[1000];
    printf("Enter Polynomial 1:");
    scanf("%s",polynomial1);
    printf("Enter Polynomial 2:");
    scanf("%s",polynomial2);

    poly poly1 = extraction(polynomial1); //function to extract the required data from the string for manipulation
    poly poly2 = extraction(polynomial2);
    int i,j;

    //Assuming Max degree 1000
    int multipliedPoly[1001];
    for(i = 0; i < 1001; i++)
        multipliedPoly[i] = 0;

    for(i = 0; i < poly1.terms; i++)
    {
        for(j = 0; j < poly2.terms; j++)
            multipliedPoly[poly1.exponent[i]+poly2.exponent[j]] += poly1.coefficient[i]*poly2.coefficient[j]; //new poly
    }

    int flag = 1;
    printf("The resultant polynomial after multiplication in the form of string is:\n");
    for(i = 1000; i >= 0; i--)
    {
        if(multipliedPoly[i] != 0)
        {
            if(flag || multipliedPoly[i] < 0)
            {
                printf("%d",multipliedPoly[i]);
                flag = 0;
            }
            else
            {
                printf("+%d",multipliedPoly[i]);
            }
            if(i != 0)
            {
                printf("x");
                if(i != 1)
                    printf("^%d",i);
            }
        }
    }
}

