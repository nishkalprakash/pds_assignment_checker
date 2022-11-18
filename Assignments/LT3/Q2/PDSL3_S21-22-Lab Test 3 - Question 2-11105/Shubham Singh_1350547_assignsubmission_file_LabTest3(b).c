/*
Name: Shubham Singh
Roll No: 21EX10032
Department: Geology and Geophysics
Package: Codeblocks
Lab Test: 3(b)
*/

#include<stdio.h>

 /* declare structure for polynomial */
 struct poly
 {
   int terms;
   int coeff;
   int expo;
 };
 /* declaring three arrays p1, p2, p3 of type structure poly.
 * each polynomial can have maximum of ten terms
 * multiplication result of p1 and p2 is stored in p3 */

 struct poly p1[10],p2[10],p3[20],pt;

 //function prototypes
 int readPoly(struct poly []);
 int multiplyPoly(struct poly [],struct poly [],int ,int ,struct poly []);
 void displayPoly( struct poly [],int terms);

 int main()
 {
  int t1,t2,t3;

  // read and display first polynomial
    printf(" \n input for First polynomial : ");
  t1=readPoly(p1);
  printf(" \n First polynomial : ");
  displayPoly(p1,t1);
  // read and display second polynomial
    printf(" \n input for Second polynomial : ");
  t2=readPoly(p2);
  printf(" \n Second polynomial : ");
  displayPoly(p2,t2);

  // multiply two polynomials and display resultant polynomial
    printf(" \n\n Resultant polynomial after multiplication : ");
  multiplyPoly(p1,p2,t1,t2,p3);


  printf("\n");

  return 0;
 }

 int readPoly(struct poly p[10])
 {
  int i;

  printf("\n\n Enter the total number of terms in the polynomial:");
  scanf("%d",&pt.terms);

  printf("\n Enter the COEFFICIENT and EXPONENT in Ascending Order\n\n****************************************\n(starting from the constant term {power of x = 0} then moving towards the terms with more power of x in increasing order)\nfor example if polynomial is : 3x + 2 then\nCoefficient(1) = 2\nExponent(1) = 0\nCoefficient(2) = 3\nExponent(2) = 1\n\n************************************\n");
  for(i=0;i<pt.terms;i++)
  {
    printf("\n   Enter the Coefficient(%d): ",i+1);
    scanf("%d",&p[i].coeff);
    printf("      Enter the exponent(%d): ",i+1);
    scanf("%d",&p[i].expo);
  }
  return(pt.terms);
 }

 int multiplyPoly(struct poly p1[10],struct poly p2[10],int t1,int t2,struct poly p3[20])
 {
    for(int i=0;i<20;i++) p3[i].coeff=0; //intialising all terms to 0

    for(int i=0;i<=t1;i++)
    {
        for(int j=0;j<=t2;j++)
        {
            p3[i+j].coeff+=p1[i].coeff*p2[j].coeff;

        }
    }

    printf(" %d",p3[0].coeff);

    for(int i=1;i<t1+t2-1;i++)
    {
        printf("+ %dx^%d",p3[i].coeff,i);
    }

 }

 void displayPoly(struct poly p[10],int term)
 {
  int k;

  for(k=0;k<term-1;k++)
  printf("%d(x^%d)+",p[k].coeff,p[k].expo);
  printf("%d(x^%d)",p[term-1].coeff,p[term-1].expo);
}
