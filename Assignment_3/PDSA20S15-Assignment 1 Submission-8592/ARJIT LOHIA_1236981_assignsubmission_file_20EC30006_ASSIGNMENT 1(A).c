#include<stdio.h>
int main()
{
    int a, b, c, d, p, q;
    printf("Enter bottom left corner coordinates\n");
    scanf("%d%d", &a, &b);
    printf("Enter top right corner coordinates\n");
    scanf("%d%d", &c, &d);
    printf("Enter the coordinates you want to find\n");
    scanf("%d%d", &p, &q);
    if((p>a && p<c) && (q>b && q<d))
        printf("The point is inside the rectangle\n");
    else
        printf("The point is outside the rectangle\n");
    return 0;
}
