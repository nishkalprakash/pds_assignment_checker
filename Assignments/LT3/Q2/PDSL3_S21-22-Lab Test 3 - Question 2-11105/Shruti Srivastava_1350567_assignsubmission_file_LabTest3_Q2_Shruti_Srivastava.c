/* Shruti Srivastava
   21EE30025
   Electrical Engg Dual Degree
   Codeblocks
   Windows 10 */

#include<stdio.h>
#define MAX 100
int main()
{
   struct poly
    {
      int terms;
      int coeff[MAX];
      int exp[MAX];
    };

    struct poly p[3];

    char P1[MAX];
    char P2[MAX];
    char P3[MAX];

    int count1=0,count2=0,j1=0,k1=0,j2=0,k2=0,i,j,l=0,t=0,q=0,k3=0,j3=0;

    printf("Enter the first polynomial\n");
    scanf("%s",P1);

    printf("Enter the second polynomial\n"); //taking the two polynomials as input
    scanf("%s",P2);

    for(i=0 ; i<strlen(P1) ; i++) //extracting the terms, coefficients and exponents of first polynomial
     {
        if(P1[i]== '+' || P1[i]== '-')
          {
             count1++;
          }
        if(P1[i]== '^')
          {
            p[0].exp[j1]= P1[i+1];
            j1++;
          }
         if(P1[i]== 'x')
           {
             p[0].coeff[k1]= P1[i-1];
             k1++;
           }
      }

    p[0].terms = count1 + 1;

    for(i=0 ; i<strlen(P2) ; i++) // extracting the terms, coefficients and exponents of second polynomial
     {
        if(P2[i]== '+')
          {
             count2++;
          }
         if(P2[i]== '^')
          {
            p[1].exp[j2]= P2[i+1];
            j2++;
          }
         if(P2[i]== 'x')
           {
             p[1].coeff[k2]= P2[i-1];
             k2++;
           }
      }

    p[1].terms = count2 + 1;

    for(i=0 ; i<p[0].terms ; i++) // multiplying the two polynomial and exrracting each term
     { for(j=0; j<p[1].terms; j++)
        {
           p[2].coeff[k3] = (p[0].coeff[i])*(p[1].coeff[j]);
           k3++;

           p[2].exp[j3]= (p[0].exp[i]+p[1].exp[j]);
           j3++;
        }
    }

     p[2].terms = j3;

     printf("\nFinal polynomial\n");

     while(t<j3 && q<k3) //converting the final polynomial as a string
      { P3[l]= "p[2].coeff[q]x^p[2].exp[t] +";
        l++;
        q++;
        t++;
    }

    if(P3[strlen(P3-1)]== '+')
     {
        P3[strlen(P3-1)]= ' ';
     }

      printf("%s",P3); //printing the final polynomial
}





