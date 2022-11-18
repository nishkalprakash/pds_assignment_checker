#include <stdio.h>
int main()
{
    char ch;
    printf("Enter the type for wood('n' for natural wood, 's' for synthetic wood):");
    scanf("%c", &ch);

    float weight;
    printf("Enter the weight of wood (in Kg.) you want:");
    scanf("%f", &weight);

    float b, g, t;
    if (ch == 'n')
    {
        b = 1100 * weight;
        g = 0.2 * b;
        t = b + g;
    }
    if (ch == 's')
    {
        b = 780 * weight;
        g = 0.15 * b;
        t = b + g;
    }

    printf("Base Price= %.2f\n", b);
    printf("GST= %.2f\n", g);
    printf("Total Price= %.2f\n", t);

    return 0;
}
