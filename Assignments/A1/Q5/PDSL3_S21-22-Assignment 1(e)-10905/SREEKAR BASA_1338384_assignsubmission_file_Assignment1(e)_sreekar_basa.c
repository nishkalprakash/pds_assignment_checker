/*
Name        : Basa Sreekar
Roll no.    : 21EE10024
Department  : Electrical Engineering
package     : code blocks
Assignment 1(e)
*/
#include <stdio.h>
int main()
{
    char wd,n,s;
    float a,b,c,w;
    printf("Enter the type of wood( 'n' for natural wood /'s' for synthetic): "); //Enter either n or s //
    scanf("%c",&wd);
    if(wd=='n')
    {
        printf("Enter the weight of wood required :");//natural or synthetic//
        scanf("%f",&w);
        a = 1100*w ;
        printf("Base price = %0.2f/- \n",a);
        b = 0.2*a ;
        printf("GST = %0.2f/- \n",b);
        c = a+b ;
        printf("Total price = %0.2f/- \n",c);
    }
    if(wd=='s')
    {
        printf("Enter the weight of wood required :");
        scanf("%f",&w);
        a = 780*w ;
        printf("Base price = %0.2f/- \n",a);
        b = 0.15*a ;
        printf("GST = %0.2f/- \n",b);
        c = a+b ;
        printf("Total price = %0.2f/- \n",c);
    }
    return 0;
}
