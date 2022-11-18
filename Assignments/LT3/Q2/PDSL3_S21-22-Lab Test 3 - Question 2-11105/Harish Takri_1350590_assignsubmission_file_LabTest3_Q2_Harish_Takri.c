/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/

#include<stdio.h>
#include<conio.h>
// defining struture to store coef and degree
struct poly
{
int degree;
int coeff;
};

void main()
{
struct poly poly1[10],poly2[10],product[100];
    int noOfTerms1,noOfTerms2,count=-1; // two variables of no of terms
    int i,j; // declaring i &j for  loop

    printf("\nEnter Number Of Terms Of first Polynomial: "); // details of the first polynomial
    scanf("%d",&noOfTerms1);  //no of terms in first Polynomial
        for(i=0;i< noOfTerms1;i++)
    {
    printf("\nEnter Degree: ");
    scanf("%d",&poly1[i].degree);
    printf("\nEnter Coefficient: ");
    scanf("%d",&poly1[i].coeff);
    }
    printf("\nEnter Number Of Terms Of second Polynomial: "); // details of second polynomial
    scanf("%d",&noOfTerms2); // no of terms in second Polynomial
    for(i=0;i< noOfTerms2;i++)
    {
    printf("\nEnter Degree: ");
    scanf("%d",&poly2[i].degree);
    printf("\nEnter Coefficient: ");
    scanf("%d",&poly2[i].coeff);
    }
    /* completion of taking data of polynomial */
   for(i=0;i< noOfTerms1;i++)
    {
   for (j=0;j< noOfTerms2;j++)
   {
    product[++count].degree=poly1[i].degree+poly2[j].degree;    // multiplication of the two polynomials...
    product[count].coeff=poly1[i].coeff*poly2[j].coeff;
    } // end of j loop
    } // end of i loop
    printf("\nThe Product Of Two Polynomials Is: \n");
    for(i=0;i<=count;i++)
    {
    if(product[i].degree==0)
    printf("%d ",product[i].coeff);
    else if(product[i].degree==1)
    printf("%dx ",product[i].coeff);
    else
    {
    printf("%dx^%d ",product[i].coeff,product[i].degree);  // printing the out put
    }
    if(i!=count)
    printf("+ ");
    }  //End of i for loop
    getch();
    }   //End of main function
