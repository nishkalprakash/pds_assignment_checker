#include<stdio.h>

int main()
{
    int x1,y1, x2,y2, x3,y3 ,x4,y4;
    float a1, a2, a3, a4;
    printf("(x1,y1)");
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2)");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3)");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4)");
    scanf("%d%d",&x4,&y4);

    a1=sqrt(())
    a2=
    a3=
    a4=

    if ((a1>a2)&(a1>a3)&(a1>a4))
    {

        printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("area:",a1);
    }
    if((a2>a1)&(a2>a3)&(a2>a4))
    {
        printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
        printf("area:",a2);
    }
    if((a3>a1)&(a3>a2)&(a3>a4))
    {
        printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);
        printf("area:",a3);
        }
    if((a4>a1)&(a4>a2)&(a4>a3))
    {
        printf("points having the minimum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
        printf("area:",a4);
    }
}
