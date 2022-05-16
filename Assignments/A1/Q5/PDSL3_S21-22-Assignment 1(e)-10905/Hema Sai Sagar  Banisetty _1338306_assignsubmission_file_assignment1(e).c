/*
Name            : Banisetty Hema Sai Sagar
Roll            : 21EC10011
Dept            : E&ECE
Package         : Code Blocks
Assignment Class: 6
*/
#include<stdio.h>
float main()
{
    char type, n, s;
    float weight, baseprice, gst, totalprice;

    printf("Enter the type of wood(n for natural wood, s for synthetic wood):\n");
    scanf("%c", &type);
    printf("Enter the weight of wood(in kg) you want:\n");
    scanf("%f", &weight);

    switch(type){
           case 'n':
                   baseprice = weight*1100;
                   gst = baseprice*0.2;
                   totalprice = baseprice + gst;

                   printf("Base price is %f\n", baseprice);
                   printf("GST is %f\n", gst);
                   printf("Total price is %f", totalprice);

                   break;
           case 's':
                   baseprice = weight*780;
                   gst = baseprice*0.15;
                   totalprice = baseprice + gst;

                   printf("Base price is %f\n", baseprice);
                   printf("GST is %f\n", gst);
                   printf("Total price is %f", totalprice);

                   break;
     }

    return 0;
}
