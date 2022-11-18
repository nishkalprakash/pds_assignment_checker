
// NAME- SATYAJIT BEHERA
//  ROLL NO-21AG10034
// DEPT- AGRICULTURE AND FOOD ENGINEERING
// SECTION-03
// SOFTWARE- code block
#include<stdio.h>
#include<conio.h>

struct poly
{
int deg;
int coeff;
};
/*End of structure definition*/

void main()
{
struct poly poly1[10],poly2[10],product[100];
int noOfTerms1,noOfTerms2,count=-1;
int i,j;
clrscr();
printf("\nEnter Number Of Terms Of 1st Polynomial: ");
scanf("%d",&noOfTerms1);
for(i=0;i< noOfTerms1;i++)
{
printf("\nEnter Degree: ");
scanf("%d",&poly1[i].deg);
printf("\nEnter Coefficient: ");
scanf("%d",&poly1[i].coeff);
}/*End of i for loop*/
printf("\nEnter Number Of Terms Of 2nd Polynomial: ");
scanf("%d",&noOfTerms2);
for(i=0;i< noOfTerms2;i++)
{
printf("\nEnter Degree: ");
scanf("%d",&poly2[i].deg);
printf("\nEnter Coefficient: ");
scanf("%d",&poly2[i].coeff);
}/*End of i for loop*/
for(i=0;i< noOfTerms1;i++)
{
for (j=0;j< noOfTerms2;j++)
{
product[++count].deg=poly1[i].deg+poly2[j].deg;
product[count].coeff=poly1[i].coeff*poly2[j].coeff;
}/*End of j for loop*/
}/*End of i for loop*/
printf("\nThe Product Of Two Polynomials Is: \n");
for(i=0;i<=count;i++)
{
if(product[i].deg==0)
printf("%d ",product[i].coeff);
else if(product[i].deg==1)
printf("%dx ",product[i].coeff);
else
{
printf("%dx^%d ",product[i].coeff,product[i].deg);
}
if(i!=count)
printf("+ ");
}/*End of i for loop*/
getch();
}/*End of main()*/
