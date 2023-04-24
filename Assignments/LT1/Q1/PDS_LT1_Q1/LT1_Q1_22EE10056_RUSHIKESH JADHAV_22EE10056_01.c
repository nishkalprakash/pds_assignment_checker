#include<stdio.h>
#include<math.h>
int main()
{
    float x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,a,x5,y5,x6,y6,x7,y7,per;

    printf("Enter x1 and y1:");
    scanf("%f %f",&x1,&y1);
    printf("Enter x2 and y2:");
    scanf("%f %f",&x2,&y2);
    printf("Enter x3 and y3:");
    scanf("%f %f",&x3,&y3);
    printf("Enter x4 and y4:");
    scanf("%f %f",&x4,&y4);
    a1=(x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2));
    a1/=2;
    a2=(x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3));
    a2/=2;
    a3=(x3*(y4-y1))+(x4*(y1-y3))+(x1*(y3-y4));
    a3/=2;
    a4=(x4*(y1-y2))+(x1*(y2-y4))+(x2*(y4-y1));
    a4/=2;
    a1=(a1>0)?a1:-a1;
    a2=(a2>0)?a2:-a2;
    a3=(a3>0)?a3:-a3;
    a4=(a4>0)?a4:-a4;
    a=a1;
    x5=x1,x6=x2,x7=x3,y5=y1,y6=y2,y7=y3;
    if(a2>a)
    {
        a=a2;
        x5=x4,x6=x2,x7=x3,y5=y4,y6=y2,y7=y3;
    }
    if(a3>a)
    {
        a=a3;
        x5=x4,x6=x1,x7=x3,y5=y4,y6=y1,y7=y3;
    }
    if(a4>a)
    {
        a=a4;
        x5=x4,x6=x2,x7=x1,y5=y4,y6=y2,y7=y1;
    }
    printf("Points having the maximum area:(%f,%f),(%f,%f),(%f,%f)",x5,y5,x6,y6,x7,y7);
    per=sqrt(pow((x5-x6),2)+pow((y5-y6),2)) + sqrt(pow((x7-x6),2)+pow((y7-y6),2)) +sqrt(pow((x5-x7),2)+pow((y5-y7),2));
    if(a!=0)
    {
        printf("Perimeter=%f",per);
    }
    else
    {
        printf("Perimeter=0(since there is no triangle)");
    }


    return 0;
}
