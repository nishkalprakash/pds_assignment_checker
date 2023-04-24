//Name-Srija Biswas
//Section-2
//Roll No.-22ME30069
//Lab Test-1 Problem-1
//Description-area of smallest triangle
#include<stdio.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    float a1,a2,a3,a4,l1,l2,l3;
    printf("Enter the points for (x1,y1)\n");
    scanf("%d%d",&x1,&y1);
    printf("Enter the points for (x2,y2)\n");
    scanf("%d%d",&x2,&y2);
    printf("Enter the points for (x3,y3)\n");
    scanf("%d%d",&x3,&y3);
    printf("Enter the points for (x4,y4)\n");
    scanf("%d%d",&x4,&y4);
    a1=(float)(0.5*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));
    a2=(float)(0.5*((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3))));
    a3=(float)(0.5*((x1*(y2-y4))+(x2*(y4-y1))+(x4*(y1-y2))));
    a4=(float)(0.5*((x1*(y3-y4))+(x3*(y4-y1))+(x4*(y1-y3))));
    if(a1<0)
    a1=a1*(-1);
    if(a2<0)
    a2=a2*(-1);
    if(a3<0)
    a3=a3*(-1);
    if(a4<0)
    a4=a4*(-1);
    l1=(a1<a2)?a1:a2;
    l2=(l1<a3)?l1:a3;
    l3=(l2<a4)?l2:a4;
    if(l3==a1)
    {
        printf("Points Having the minimum area: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
        printf("Area=%.2f",a1);
    }
    else if(l3==a2)
    {
        printf("Points Having the minimum area: (%d,%d),(%d,%d),(%d,%d)",x2,y2,x3,y3,x4,y4);
        printf("Area=%.2f",a2);
    }
    else if(l3==a3)
    {
        printf("Points Having the minimum area: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
        printf("Area=%.2f",a3);
    }
    else if(l3==a4)
    {
        printf("Points Having the minimum area: (%d,%d),(%d,%d),(%d,%d)",x1,y1,x3,y3,x4,y4);
        printf("Area=%.2f",a4);
    }
}




