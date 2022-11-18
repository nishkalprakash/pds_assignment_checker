/*
Name: Anindita Malviya
Dept:MI
Roll no. : 21MI33004
Package : Code Blocks
*/

#include <stdio.h>
#include <math.h>

int main()
{
    char wood;
    float bp,tp,gst,w;
    printf("Enter the type of wood(n for natural wood, s for synthetic wood): ");
    scanf("%c",&wood);

    switch (wood)
    {
    case 'n':
        printf("Enter the weight of wood (in kg.) you want: ");
        scanf("%f",&w);
        bp = 1100*w;
        gst = bp*0.2;
        tp = bp + gst;
        printf("Base price = %0.2f \nGST = %0.2f \nTotal Price = %0.2f \n",bp,gst,tp);
        break;
    case 's':
         printf("Enter the weight of wood (in kg.) you want: ");
        scanf("%f",&w);
        bp = 780*w;
        gst = bp*0.15;
        tp = bp + gst;
        printf("Base price = %0.2f \nGST = %0.2f \nTotal Price = %0.2f \n",bp,gst,tp);
        break;
    default :
                printf("Invalid wood type");
                break;

    }
}
