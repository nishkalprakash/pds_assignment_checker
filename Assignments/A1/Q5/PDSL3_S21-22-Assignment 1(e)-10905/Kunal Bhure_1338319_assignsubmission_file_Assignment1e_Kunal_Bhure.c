#include<stdio.h>
int main()
{
    int weight;
    char wood;
    float s, gst, b;
    printf("Enter the type of wood (1 for natural wood, 2 for synthetic wood):");
    scanf("%c", &wood);
    printf("Enter the weight of wood (in Kg.) you want:");
    scanf("%d", &weight);
    switch (wood)
    {
    case 'n':
        b = 1100 * weight;
        gst = 0.2 * b;
        s = b + gst;
        printf("Base price=%f\n", b);
        printf("GST=%f\n", gst);
        printf("Total=%f", s);
        break;

    case 's':
        b = 780 * weight;
        gst = 0.15 * b;
        s = b + gst;
        printf("Base price=%f\n", b);
        printf("GST=%f\n", gst);
        printf("Total=%f", s);
        break;
}
}
