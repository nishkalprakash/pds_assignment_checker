// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 1

#include<stdio.h>

#include<math.h>

int main()
{
    char n,s;
    char wood;
    float weight;
    float baseprice, totalprice;
    float GST;

    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&wood );
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%d",&weight );

    if (wood == 'n')
    {
        baseprice = 1100.0*(weight);
        printf("The baseprice is = %.2f \n", baseprice);
        GST = (20.0/100)*baseprice;
        printf("GST is %.2f \n", GST);
        totalprice = baseprice + GST;
        printf("Total price = %.2f \n", totalprice);
    }
    else if (wood == 's')
    {
        baseprice = 780.0*(weight);
        printf("The baseprice is = %.2f \n", baseprice);
        GST = (15.0/100)*baseprice;
        printf("GST is %.2f \n", GST);
        totalprice = baseprice + GST;
        printf("Total price = %.2f \n", totalprice);
    }

    return 0;
}