#include <stdio.h>
#include <conio.h>

struct poly
{
int degree;
int coeff;
};

int main()
{   char poly1_string[100];
    char poly2_string[100];
    scanf("%s", poly1_string);
    scanf("%s", poly2_string);
    int noOfTerms1 = 1, noOfTerms2 = 1;
    for(int i = 0;i < 100;i++)
    {   if(poly1_string[i] == '+')
        noOfTerms1++;
        if(poly2_string[i] == '+')
        noOfTerms2++;
    }
    struct poly poly1[noOfTerms1],poly2[noOfTerms2],product[noOfTerms1*noOfTerms2];

    int current1 = 0;
    int current2 = 0;
    for(int i = 0;i < 100;i++)
    {   if(poly1_string[i] == 'x' )
        {   if(poly1_string[i - 1] != '+')
            poly1[current1].coeff = 1;
            else if(poly1_string[i - 1] != '-')
            poly1[current1].coeff = -1;
            else if(i == 0)
            poly1[current1].coeff = 1;
            else
            poly1[current1].coeff = poly1_string[i - 1];
            poly1[current1].degree = poly1_string[i + 2];
            current1++;
        }
        if(poly2_string[i] == 'x' )
        {   if(poly2_string[i - 1] != '+')
            poly2[current2].coeff = 1;
            else if(poly2_string[i - 1] != '-')
            poly2[current2].coeff = -1;
            else if(i == 0)
            poly2[current2].coeff = 1;
            else
            poly2[current2].coeff = poly2_string[i - 1];
            poly2[current1].degree = poly2_string[i + 2];
            current2++;
        }

    }
    int count = -1,i,j;
    for(int i=0;i< noOfTerms1;i++)
    {
    for (int j=0;j< noOfTerms2;j++)
    {
    product[++count].degree=poly1[i].degree+poly2[j].degree;
    product[count].coeff=poly1[i].coeff*poly2[j].coeff;
    }//End of j for loop/
    }//End of i for loop/
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(i=0;i<=count;i++)
    {
    if(product[i].degree==0)
    printf("%d ",product[i].coeff);
    else if(product[i].degree==1)
    printf("%dx ",product[i].coeff);
    else
    {
    printf("%dx^%d ",product[i].coeff,product[i].degree);
    }
    if(i!=count)
    printf("+ ");
    }//End of i for loop/
    getch();
}
