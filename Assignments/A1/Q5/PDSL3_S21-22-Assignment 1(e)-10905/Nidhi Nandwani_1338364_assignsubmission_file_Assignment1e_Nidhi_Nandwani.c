#include<stdio.h>

int main()
{
    char c;
    float w;
    float bp, GST, totalp;
    printf("Enter the type of wood(n for natural wood, s for synthetic wood): ");
    scanf("%c", &c);
    printf("Enter the weight of wood(in Kg.) you want: ");
    scanf("%f", &w);

    if(c == 'n')
    {
        bp = 1100*w;
        GST = 0.2*bp;
        totalp = bp + GST ; 
        printf("Base price = %.2f\n", bp);
        printf("GST = %.2f\n", GST);
        printf("Total price = %.2f\n", totalp);

    }

    if(c == 's')
    {
        bp = 780*w;
        GST = 0.15*bp;
        totalp = bp + GST ; 
        printf("Base price = %.2f\n", bp);
        printf("GST = %.2f\n", GST);
        printf("Total price = %.2f\n", totalp);

    }

}