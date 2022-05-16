// question 5
// wood price
#include <stdio.h>
int main()
{
    char ch;
    float bp,gst,tp;
    printf("Enter the type of wood (n for natural wood, s for synthetic wood): ");
    scanf("%c",&ch);
    float w;
    printf("Enter the weight of wood(in Kg) you want: ");
    scanf("%f",&w);
    if(ch=='n')
    {
        bp=w*1100;
        printf("----------------------------------\n");
        printf("Base price =\t %.2f\n",bp);
        gst=0.2*bp;
        printf("GST =\t\t %.2f\n",gst);
        tp=bp+gst;
        printf("Total price =\t %.2f\n",tp);
        printf("----------------------------------\n");
    }
    else
    {
        bp=w*780;
        printf("----------------------------------\n");
        printf("Base price =\t %.2f\n",bp);
        gst=0.15*bp;
        printf("GST =\t %.2f\n",gst);
        tp=bp+gst;
        printf("Total price =\t %.2f\n",tp);
        printf("----------------------------------\n");
    }
    return 0;
}

