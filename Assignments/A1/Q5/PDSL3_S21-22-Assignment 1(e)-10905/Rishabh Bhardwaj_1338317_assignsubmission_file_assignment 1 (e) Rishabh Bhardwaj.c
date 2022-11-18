/*
Rishabh Bhardwaj
21CE10052
Civil
sec-3
CodeBlock
windows
*/
#include <stdio.h>
#include <math.h>

int main(void)
{
    char c1;
    float w, w1, w2, w3, w4, t1, t2;

    printf("Enter the type of wood (n for natural woos , s for synthetic wood): ");
    scanf("%c", &c1);
    printf("\n");



    printf("Enter the weight of wood(in kg): ");
    scanf("%f", &w);
    printf("\n");

    if ( c1 == 'n' )
    {

        w1 = 1100 * w;

        printf("Base price = %.2f\n", w1 );

        w2 = 0.2 * w1;

        printf("GST = %.2f\n", w2 );

        t1 = w1 + w2;
        printf("Total price = %f", t1);
    }
    else if ( c1 == 's')
    {
         w3 = 780 * w;

        printf("Base price = %.2f\n", w3);

        w4 = 0.15 * w3;

        printf("GST = %.2f\n", w4);

        t2 = w3 + w4;
        printf("Total price = %f", t2);
    }
    else
    {
        printf("Please enter vaild character\n");
    }
}
