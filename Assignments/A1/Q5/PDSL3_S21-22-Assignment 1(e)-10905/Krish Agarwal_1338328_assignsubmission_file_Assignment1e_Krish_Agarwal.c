/*
Name- Krish Agarwal
Roll No.- 21NA10018
Department- Ocean Engineering and Naval Architecture
IDE- Codeblocks
Section- 3
*/
#include <stdio.h>
int main()
{
    char c;
    float w,base=0.0,gst=0.0,net=0.0;
    printf("Enter the Type of Wood you are purchasing\nPress 'n' for natural wood, 's' for synthetic wood : ");
    scanf("%c",&c);
    printf("Enter the weight of wood (in kg) you want : ");
    scanf("%f",&w);
    if((c=='n')||(c=='N'))
    {
        base=w*1100.0;
        gst=0.20*base;
        net=base+gst;
        printf("\n------------------------------------------------\n");
        printf("Base Price = %.2f\n",base);
        printf("GST = %.2f\n",gst);
        printf("Total price = %.2f\n",net);
        printf("\n------------------------------------------------\n");

    }
    else if((c=='s')||(c=='S'))
    {
        base=w*780.0;
        gst=0.15*base;
        net=base+gst;
        printf("\n------------------------------------------------\n");
        printf("Base Price = %.2f\n",base);
        printf("GST = %.2f\n",gst);
        printf("Total price = %.2f\n",net);
        printf("\n------------------------------------------------\n");

    }
    else
    {
        printf("Incorrect Input.");
    }
    return 0;
}
