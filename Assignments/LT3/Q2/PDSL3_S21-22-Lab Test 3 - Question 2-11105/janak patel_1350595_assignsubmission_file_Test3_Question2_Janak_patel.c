
/*
name: JANAK PATEL
roll: 21AG30027
dept: agricultural and food engineering
package: code blocks
Test 3: question 2
*/


#include<stdio.h>
#include<conio.h>

struct polynomial
{
    int coefficient;
    int degree;
};                   // END OF STRUCTURE DEFINATION ----->//


void main(){

   struct polynomial  polynomial1[10] ,polynomial2 [10], product [100];    // assumed  maximum polynomial of degree 10 //

   int number_of_terms1 , number_of_terms2 , count = -1;
   int clrscr();

   printf("ENTER THE NUMBER OF TERM OF 1ST POLYNOMIAL :\n");
   scanf("%d",&number_of_terms1);

   for (int i= 0; i< number_of_terms1;i++)
   {
       printf("ENTER THE VALUE OF DEGREE  :\n");
       scanf("%d",&polynomial1[i].degree);
       printf("ENTER THE VALUE OF COEFFICIENT :\n");
       scanf("%d",&polynomial1[i].coefficient);
   }   // end of  i for  loop //


   printf("ENTER THE NUMBER OF TERM OF 2ND POLYNOMIAL :\n");
   scanf("%d",&number_of_terms2);

   for (int i= 0; i< number_of_terms2;i++)
   {
       printf("ENTER THE VALUE OF DEGREE  :\n");
       scanf("%d",&polynomial2[i].degree);
       printf("ENTER THE VALUE OF COEFFICIENT :\n");
       scanf("%d",&polynomial2[i].coefficient);
   }   // end of i for loop //

   for (int i=0;i<number_of_terms1;i++)
   {



    for (int j=0; j<number_of_terms2;j++)
    {

        product[++count].degree = polynomial1[i].degree + polynomial2[j].degree ;
        product[count].coefficient = polynomial1[i].coefficient*polynomial2[j].coefficient ;



        } // end of j for loop
    }      // end of i for loop


    printf("THE PRODUCT OF TWO POLYNOMIAL IS   : \n");

    for ( int i=0 ;i<=count;i++)
    {
        if (product[i].degree == 0)
        {
            printf("%d",product[i].coefficient);
        }
        else if (product[i].degree == 1)
        {
            printf("%dx",product[i].coefficient);
        }
        else {
            printf("%dx^%d",product[i].coefficient,product[i].degree);
        }

        if(i!=count)

            printf(" + ");
          }  // end of i for loop

        getch();
                    // end of main function
    }

