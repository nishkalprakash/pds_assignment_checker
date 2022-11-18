/*
Name:Lohitava Ghosh
Roll no.:21AE10023
Department:Aerospace Engg Btech.
Package:code blocks
Operating system: Windows
*/

#include <stdio.h>

int main()
{
    char a;
    float w,b,g,t;
    printf("Enter the type of wood(n for natural wood, s for synthetic wood): ");
    scanf("%c",&a);
    printf("Enter the weight of wood(in Kg.) you want: ");
    scanf("%f",&w);
    printf("-------------------\n");
    if(a=='n')
    {
        b=w*1100;
        g=b*0.2;
        t=b+g;
    }
    else
    {
        b=w*780;
        g=b*0.15;
        t=b+g;
    }
    printf("Base Price =  %0.2f\n",b);
    printf("GST =         %0.2f\n",g);
    printf("Total Price = %0.2f\n",t);
    printf("-------------------");

    return 0;
}
