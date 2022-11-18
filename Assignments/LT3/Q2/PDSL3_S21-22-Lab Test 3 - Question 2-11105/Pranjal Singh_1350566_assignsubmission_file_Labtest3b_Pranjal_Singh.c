/*
PRANJAL SINGH
Roll:21EC10051
Electronics and Electrical Communication engineering
codeblocks
Assignment class:6
*/
#include <stdio.h>

struct polynomial
{
int degree;
int coefficient;
};
int main()
{ //defining structure for polynomial
struct polynomial polynomial1[10],polynomial2[10],product[100];
int noOfTerms1,noOfTerms2,count=-1;
int i,j;

printf("\nEnter Number Of Terms Of 1st Polynomial: ");
scanf("%d",&noOfTerms1);
for(i=0;i< noOfTerms1;i++)
{
//input degree and coefficient one by one as degree of first , coefficient of first then degree of second , coefficient of second and so on
printf("\nEnter Degree: ");
scanf("%d",&polynomial1[i].degree);
printf("\nEnter Coefficient respectively : ");
scanf("%d",&polynomial1[i].coefficient);
}
printf("\nEnter Number Of Terms Of 2nd Polynomial: ");
scanf("%d",&noOfTerms2);
for(i=0;i< noOfTerms2;i++)
{
printf("\nEnter Degree: ");
scanf("%d",&polynomial2[i].degree);
printf("\nEnter Coefficient respectively : ");
scanf("%d",&polynomial2[i].coefficient);
}
for(i=0;i< noOfTerms1;i++)
{
for (j=0;j< noOfTerms2;j++)
{
product[++count].degree=polynomial1[i].degree+polynomial2[j].degree;
product[count].coefficient=polynomial1[i].coefficient*polynomial2[j].coefficient;
}
}
printf("\nThe resultant polynomial after multiplication is : \n");
for(i=0;i<=count;i++)
{
if(product[i].degree==0)
printf("%d ",product[i].coefficient);
else if(product[i].degree==1)
printf("%dx ",product[i].coefficient);
else
{
printf("%dx^%d ",product[i].coefficient,product[i].degree);
}
if(i!=count)
printf("+ ");
}
return 0;
}


