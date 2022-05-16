/*
Thota Kesava Chandra
Computer Science Department
21CS30056
Code Blocks
Windows
*/


#include <stdio.h>

int main()
{
    float weight, base,gst;
    char wtype;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&wtype);
    printf("Enter the weight of wood (in Kg.) you want: ");
    scanf("%f",&weight);
    if (wtype=='n')
    {
        base = 1100*weight;
        gst = 0.2*base;
        printf("Base Price = %.2f\n",base);
        printf("GST = %.2f\n",gst);
        printf("Total Price = %.2f\n",base+gst);
    }
    else
    {
        base = 1100*weight;
        gst = 0.2*base;
        printf("Base Price = %.2f\n",base);
        printf("GST = %.2f\n",gst);
        printf("Total Price = %.2f\n",base+gst);
    }
    return 0;
}
