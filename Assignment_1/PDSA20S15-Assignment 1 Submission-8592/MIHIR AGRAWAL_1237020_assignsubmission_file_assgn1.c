#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d, e, f, g, h, p, q;
    printf("Enter the coordinates of the bottom left corner: \n");
    scanf("%d%d",&a,&b);
    printf("Enter the coordinates of the top right corner: \n");
    scanf("%d%d",&c,&d);
    e=a;
    f=d;
    g=c;
    h=b;
    printf("The four corners rectangle of the rectangle are: (%d,%d),(%d,%d),(%d,%d),(%d,%d)\n", a,b,e,f,c,d,g,h);
    printf("Enter the coordinates of a point: \n");
    scanf("%d%d",&p,&q);
    if(p>a && p<c && q>b && q<d)
        printf("The point (%d,%d) is inside the rectangle", p, q);
    else
        printf("The point (%d,%d) is not inside the rectangle", p, q);
    return 0;
}
