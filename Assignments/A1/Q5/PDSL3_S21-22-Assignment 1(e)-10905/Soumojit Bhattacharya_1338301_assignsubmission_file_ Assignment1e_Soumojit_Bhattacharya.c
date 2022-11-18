/*Soumojit Bhattacharya 
21EC10071 
macos visual studio code*/
#include <stdio.h>


int main()
{
    //c accepts type of wood
    char c;
    //w weight
    //bp base price
    //gst GST
    //tp total price
    float w,bp,gst,tp;
    //accept type and weight of wood
    printf("Enter the type of wood:");
    scanf("%c", &c);
    printf("Enter the weight of wood:");
    scanf("%f", &w);
    printf("-----------------------------------\n");
    //computing and printing prices
    if(c=='n')
    {
        bp=1100.00*w;
        gst=0.2*bp;
        tp=bp+gst;
        printf("Base Price=  %.2f\nGST=  %.2f\nTotal Price= %.2f\n", bp, gst, tp);
    }
    else
    if(c=='s')
    {
        bp=780.00*w;
        gst=0.15*bp;
        tp=bp+gst;
        printf("Base Price=  %.2f\nGST=  %.2f\nTotal Price= %.2f\n", bp, gst, tp);
    }
    else
    {
        //print message if type of wood entered is wrong
        printf("please give valid input:\n");
    }
    printf("-----------------------------------");
return 0;
}