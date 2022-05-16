#include<stdio.h>
int main()
{
    float bp,gst,tp,w;
    char c;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood):");
    scanf("%c",&c);
    printf("\nEnter the weight of wood (in Kg.) you want:");
    scanf("%f",&w);
    if (c=='n')
    {
        bp=w*1100;
        gst=bp*20/100;
        tp=bp+gst;
    }
    else
    {    bp=w*780;
         gst=bp*15/100;
         tp=bp+gst;
    }
    printf("\nBase price = %f",bp);
    printf("\nGST= %f",gst);
    printf("\nTotal price = %f",tp);

}
