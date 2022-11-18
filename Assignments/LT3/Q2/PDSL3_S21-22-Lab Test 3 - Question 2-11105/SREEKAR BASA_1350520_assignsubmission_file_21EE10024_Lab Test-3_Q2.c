
/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_3
Question    : 1
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

typedef struct {
    int terms ;
    int coeff[] ;
    int exp[] ;
} poly;

int term(char a[])
{
    int i,j,k=0 ;
    for(i=0;a[i]!=0;i++)
    {
        if( (a[i]=='+') || (a[i]=='-')) k++ ;
    }

    return (k+1) ;
}

poly coeff(poly A,char a[])
{
    int n = A.terms ;
    int i,j,k=0,m=0 ;
    int c0[50];

    for(i=0;a[i]!='\0';i++)
    {
        if(a[i] == '+' || a[i] = '-') m++ ;
        if(a[i] == 'x')
        {
            if(a[i-1] != '+' || a[i-1] != '-')
            {
                A.coeff[k] = (int) a[i-1] ;
                k++ ;
            }
            else
            {
                if(a[i-1] == '+') A.coeff[k] = 1 ;
                if(a[i-1] == '-') A.coeff[k] = -1 ;
            }
        }

        if(m==n)
        {
            A.coeff[k] = a[i+1];
        }
    }

}

int main()
{
    poly a[2] ; // an array of two structures a[0]  and a[1] //
    int i,j,k ;
    int n ;
    char p = "3x^2-x+10";  //inputs //
    char q = "x+2" ;
    char c[50] ; // return string .//

    /*
    printf(" Enter the first polynomial : ");
    scanf("%s",p);
    printf(" Enter the second polynomial : ");
    scanf("%s",q); */


    a[0].terms = term(p);
    a[1].terms = term(q);

    // Incomplete code //
}

