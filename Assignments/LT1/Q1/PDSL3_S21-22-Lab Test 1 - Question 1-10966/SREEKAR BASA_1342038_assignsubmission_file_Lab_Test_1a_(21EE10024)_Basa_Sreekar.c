/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Lab Test_1
Question    : 1
*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,s,l,m,h,y,x;
    printf(" Monthly salary = "); // monthly salary //
    scanf("%d",&s);
    printf(" House loan = "); // reading investements //
    scanf("%d",&h);
    printf(" Life Insurance Premium =  ");
    scanf("%d",&l);
    printf(" Medical insurance =  ");
    scanf("%d",&m);
    y = s*12 ;              // Yearly salary //
    x = y;
    printf(" Yearly salary = %d \n",y);

    if(y <= 1000000)  // case where investemets are tax free and get removed from income upto a limit //
    {
        if(h<=250000) y = y-h ;
        else y = y - 250000; // limit exceeding case //

        if(l<=150000) y = y-l;
        else y = y - 150000; // limit exceeding case //

        if(m<=50000) y = y-m;
        else y = y - 40000 ; // limit exceeding case //

  // computation of taxes //
        if(y<=250000)
        {
         b = 0;
        }

        else if(y<=500000)
        {
            b = y*0.05 ;
        }
        else if(y<=750000)
        {
            b = 12500 + ((0.1)*(y-500000));
        }
        else if(y<=1000000)
        {
            b = 37500 + ((0.15)*(y-750000));
        }
    }

    else if(y>1000000) // case where investements are taxable //
    {
        y = y+h+l+m ;
        if(y<=1250000)
        {
            b = 75000 + ((0.2)*(y-1000000));
        }
        else if(y<=1500000)
        {
            b = 125000 + ((0.25)*(y-1250000));
        }
        else if(y>1500000)
        {
            b = 187500 + ((0.3)*(y-1500000));
        }
    }
    printf("Total Tax : %d",b); // Total Tax //
}
