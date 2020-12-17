#include <stdio.h>
#include <math.h>


int main()
{
    int a, b, c, d;
    scanf("%d%d",&a,&b);
    scanf("%d%d",&c,&d);
    int x1, y1, x2, y2;
    x1 = a;
    y1 = d;
    x2 = c;
    y2 = b;
    printf("The four corners of the rectangle are, (%d,%d) (%d,%d) (%d,%d) (%d,%d)\n" ,a,b,x1,y1,c,d,x2,y2);
    int p, q;
    scanf("%d%d",&p,&q);
    if(p>a&&p<c&&q>b&&q<d)
    {
        printf("The point (%d,%d) is inside the rectangle\n" ,p,q);
    }
       else printf("The point (%d,%d) is not inside the rectangle\n" ,p,q);
}







