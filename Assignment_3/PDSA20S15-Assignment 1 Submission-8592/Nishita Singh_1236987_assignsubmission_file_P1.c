#include <stdio.h>
#include <math.h>

int main ()
{
    int a, b, c, d, x=0, y=0, p, q;

        printf("Enter the bottom left co-ordinates of the rectangle a,b: \n");
        scanf("%d %d",&a,&b);

        printf("Enter the top right co-ordinates of the rectangle c,d: \n");
        scanf("%d %d",&c,&d);

        printf("The corners of the retange are (%d,%d) (%d,%d) (%d,%d) and (%d,%d) \n", a, b, a, d, c, d, c, b);

        printf("\nEnter the co-ordinates of the point (p,q) that you wish to check ");
        scanf("%d %d",&p, &q);

        if(p>a && p<c)
            x=1;
        if(q>b && q<d)
            y=1;

        if(x==1 && y==1)
            printf("\npoint (%d,%d) is inside the rectangle",p,q);
        else
            printf("\npoint (%d,%d) is not inside the rectangle",p,q);
return 0;
}
