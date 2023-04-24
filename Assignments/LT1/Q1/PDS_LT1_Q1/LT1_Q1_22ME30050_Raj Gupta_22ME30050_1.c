#include <stdio.h>
#include <math.h>

int main ()
{
    int x1,x2,x3,x4,y1,y2,y3,y4,max=0;
    float a1,a2,a3,a4,d12,d13,d14,d23,d24,d34;
    printf("enter the 1st point : ");
    scanf("%d %d",&x1,&y1);
    printf("enter the 2nd point : ");
    scanf("%d %d",&x2,&y2);
    printf("enter the 3rd point : ");
    scanf("%d %d",&x3,&y3);
    printf("enter the 4th point : ");
    scanf("%d %d",&x4,&y4);
    a1=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    a2=0.5*(x4*(y2-y3)+x2*(y3-y4)+x3*(y4-y2));
    a3=0.5*(x4*(y1-y3)+x1*(y3-y4)+x3*(y4-y1));
    a4=0.5*(x4*(y1-y2)+x1*(y2-y4)+x2*(y4-y1));

    d12=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
    d13=sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
    d14=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
    d23=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    d24=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    d34=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));

    if (a1<0)
    {
        a1=a1*(-1.0);
    }
    if (a2<0)
    {
        a2=a2*(-1.0);
    }
    if (a3<0)
    {
        a3=a3*(-1.0);
    }
    if (a4<0)
    {
        a4=a4*(-1.0);
    }
    if ((a1>=a2) && (a1>=a4) && (a1>=a3) )
    {
        printf("\npoints having the maximum area: (%d,%d) , (%d,%d) , (%d,%d)\n\n",x1,y1,x2,y2,x3,y3);

        if (a1==0) printf("perimeter = 0 (since there is no triangle)");
        else printf("perimeter = %.2f\n",d12+d13+d23);
    }

    if ((a2>=a1) && (a2>=a4) && (a2>=a3) )
    {
        printf("\npoints having the maximum area: (%d,%d) , (%d,%d) , (%d,%d)\n\n",x2,y2,x3,y3,x4,y4);

        if (a2==0) printf("perimeter = 0 (since there is no triangle)");
        else printf("perimeter = %.2f\n",d23+d34+d24);
    }

    if ((a3>=a1) && (a3>=a4) && (a3>=a2) )
    {
        printf("\npoints having the maximum area: (%d,%d) , (%d,%d) , (%d,%d)\n\n",x1,y1,x3,y3,x4,y4);

        if (a3==0) printf("perimeter = 0 (since there is no triangle)");
        else printf("perimeter = %.2f\n",d13+d34+d14);
    }

    if ((a4>=a1) && (a4>=a3) && (a4>=a2) )
    {
        printf("\npoints having the maximum area: (%d,%d) , (%d,%d) , (%d,%d)\n\n",x1,y1,x2,y2,x4,y4);

        if (a4==0) printf("perimeter = 0 (since there is no triangle)");
        else printf("perimeter = %.2f\n",d12+d14+d24);
    }

    return 0;
}
