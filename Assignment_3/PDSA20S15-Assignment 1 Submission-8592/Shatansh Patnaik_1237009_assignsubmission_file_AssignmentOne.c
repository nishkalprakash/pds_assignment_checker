#include <stdio.h>

int main()
{
    int a, b, c, d , p, q;
    printf("Enter the bottom left co-ordinates");
    scanf("%d%d", &a, &b);
    printf("Enter the top right corner co-ordinates");
    scanf("%d%d", &c, &d);
    printf("All the corners of the rectangle are (%d,%d),(%d,%d), (%d,%d), (%d,%d)", a, b, a, d, c, d, c, b);

    printf("\nEnter the point to be checked");
    scanf("%d%d", &p, &q);

     if((p>a && p<c)&&(q>b && q<d))
        printf("The co-ordinates (%d,%d) are inside the rectangle", p, q);
     else
        printf("The co-ordinates (%d,%d) are outside the rectangle",p ,q);




    return 0;
}
