/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */


#include <stdio.h>

void main(){

    char wood;
    float w;
    float bp,gst,total;

    printf("enter the type of wood('n' for natural wood, 's' for synthetic wood):");
    scanf("%c",&wood);

    if (wood=='n'){
        printf("enter the weight(in kg) of natural wood required:");
        scanf("%f",&w);
        bp=w*1100.0;
        gst=.20*bp;
        total=bp+gst;
        printf("----------------------------------------\n");
        printf("Base price: %.2f\n",bp);
        printf("GST: %.2f\n",gst);
        printf("Total price: %.2f\n",total);
        printf("----------------------------------------\n");
    }
    else if (wood=='s'){
        printf("enter the weight(in kg) of synthetic wood required:");
        scanf("%f",&w);
        bp=w*780.0;
        gst=.15*bp;
        total=bp+gst;
        printf("----------------------------------------\n");
        printf("Base price: %.2f\n",bp);
        printf("GST: %.2f\n",gst);
        printf("Total price: %.2f\n",total);
        printf("----------------------------------------\n");
    }
}
