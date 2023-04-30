#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    printf("Enter the points \n");
    scanf("%d %d %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);//inputs
    double a1=0,a2=0,a3=0,a4=0,p1,p2,p3,p4,s1,s2,s3,s,p;
    s1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    s2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    s3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    s = (s1+s2+s3)/2.0;
    a1 = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    s1 = sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2));
    s2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    s3 = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
    s = (s1+s2+s3)/2.0;
    a2 = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    s1 = sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    s2 = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
    s3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    s = (s1+s2+s3)/2.0;
    a3 = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    s1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    s2 = sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    s3 = sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    s = (s1+s2+s3)/2.0;
    a4 = sqrt(s*(s-s1)*(s-s2)*(s-s3));
    if(a1>=a2&&a1>=a3&&a1>=a4)
    {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x3,y3);
        s1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        s2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        s3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        p = s1+s2+s3;
        if(((x1-x2)*1.0/(y1-y2))==((x3-x2)*1.0/(y3-y2)))
            p=0;
        printf("Perimeter = %0.2lf",p);
    }
    else if(a2>=a1&&a2>=a3&&a2>=a4)
    {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x2,y2,x3,y3,x4,y4);
        s1 = sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2));
        s2 = sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
        s3 = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        p = s1+s2+s3;
        if(((x4-x2)*1.0/(y4-y2))==((x3-x2)*1.0/(y3-y2)))
            p=0;
        printf("Perimeter = %0.2lf",p);
    }
    else if(a3>=a1&&a3>=a2&&a3>=a4)
    {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x3,y3,x4,y4);
        s1 = sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
        s2 = sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
        s3 = sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
        p = s1+s2+s3;
        if(((x1-x4)*1.0/(y1-y4))==((x3-x4)*1.0/(y3-y4)))
            p=0;
        printf("Perimeter = %0.2lf",p);
    }
    else
    {
        printf("Points having the maximum area: (%d,%d),(%d,%d),(%d,%d)\n",x1,y1,x2,y2,x4,y4);
        s1 = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
        s2 = sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
        s3 = sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
        p = s1+s2+s3;
        if(((x1-x2)*1.0/(y1-y2))==((x4-x2)*1.0/(y4-y2)))
            p=0;
        printf("Perimeter = %0.2lf",p);
    }
}
