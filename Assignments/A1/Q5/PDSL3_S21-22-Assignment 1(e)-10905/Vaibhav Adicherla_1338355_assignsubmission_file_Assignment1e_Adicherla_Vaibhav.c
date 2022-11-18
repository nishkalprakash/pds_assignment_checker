/*
name:Adicherla Vaibhav
Roll no.:21BT10002
Department:BIOTECH 4YRS
Package:code blocks
Operating system: Windows
*/
#include <stdio.h>
int main()
{
   float x,y,z;
    char wood;
    int s= 780, n= 1100;
    printf("ENTER THE TYPE OF WOOD[n for NATURAL WOOD,s for SYNTHETIC WOOD]:");
    scanf("%c",&wood);
    printf("ENTER THE WEIGHT OF WOOD[Kg]:");
    scanf("%f",&x);
    if (wood=='s'){
        y=s*x;
    z=0.15*y;
    printf("BASE PRICE=%2.2f\n",y);
    printf("GST=%2.2f\n",z);
    printf("TOTAL PRICE=%2.2f\n",y+z);
    }
    else{
        y=n*x;
        z=0.2*y;
        printf("BASE PRICE=%2.2f\n",y);
        printf("GST=%2.2f\n",z);
        printf("TOTAL PRICE=%2.2f\n",y+z);
    }
    return 0;
    }







