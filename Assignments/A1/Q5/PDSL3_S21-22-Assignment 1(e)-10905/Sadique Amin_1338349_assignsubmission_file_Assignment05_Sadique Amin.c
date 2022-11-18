/*
Name: Sadique Amin
Roll Number: 21CE30027
Department: Civil Engineering
Package used: <math.h>,<stdio.h>
Assignment Class: 6
*/

#include <stdio.h>
#include <math.h>

int main()
{
    char c;
    float w;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&c);
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%f",&w);
    printf("-------------------------\n");
    float bs, gst;

    switch (c)
    {
        case 'n':
            bs=1100*w;
            gst=bs*0.2;
            break;
        case 's':
            bs=780*w;
            gst=bs*0.15;
            break;
        default:
            printf("Invalid Input");
    }
    float tp=gst+bs;

    printf("Base price =   %.2f\n",bs);
    printf("GST =          %.2f\n",gst);
    printf("Total price =  %.2f\n",tp);
    printf("-------------------------");

    return 0;
}