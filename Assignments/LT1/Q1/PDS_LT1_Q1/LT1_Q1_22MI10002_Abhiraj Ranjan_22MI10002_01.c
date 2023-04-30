/* Name: Abhiraj Ranjan
Roll No.: 22MI10002
Section: 2
Lab Test
Question: 1
Description: Finding the perimeter of the largest triangle */
#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,p,u1,u2,v1,v2,w1,w2;
    printf("(x1,y1) = ");
    scanf("%lf%lf",&x1,&y1);
    printf("(x2,y2) = ");
    scanf("%lf%lf",&x2,&y2);
    printf("(x3,y3) = ");
    scanf("%lf%lf",&x3,&y3);
    printf("(x4,y4) = ");
    scanf("%lf%lf",&x4,&y4);
    a1=fabs(x2*y3-x3*y2+x3*y1-x1*y3+x1*y2-x2*y1);//123
    a2=fabs(x3*y4-x4*y3+x4*y2-x2*y4+x2*y3-x3*y2);//234
    a3=fabs(x4*y1-x1*y4+x1*y3-x3*y1+x3*y4-x4*y3);//341
    a4=fabs(x1*y2-x2*y1+x2*y4-x4*y2+x4*y1-x1*y4);//412

    if((a1>=a2)&&(a1>=a3)&&(a1>=a4)&&(a1!=0&&a2!=0&&a3!=0&&a4!=0))
    {
        printf("Points having maximum area: (%.0lf,%.0lf),(%.0lf,%.0lf),(%.0lf,%.0lf)\n\n",x1,y1,x2,y2,x3,y3);
        u1=x1;
        u2=y1;
        v1=x2;
        v2=y2;
        w1=x3;
        w2=y3;
         p=(sqrt((u1-v1)*(u1-v1)+(u2-v2)*(u2-v2)))+(sqrt((u1-w1)*(u1-w1)+(u2-w2)*(u2-w2)))+(sqrt((v1-w1)*(v1-w1)+(v2-w2)*(v2-w2)));
        printf("Perimeter = %.2lf",p);
    }
    else if((a2>=a3)&&(a2>=a4)&&(a2>=a1)&&(a1!=0&&a2!=0&&a3!=0&&a4!=0))
    {
        printf("Points having maximum area: (%.0lf,%.0lf),(%.0lf,%.0lf),(%.0lf,%.0lf)\n\n",x2,y2,x3,y3,x4,y4);
        u1=x2;
        u2=y2;
        v1=x3;
        v2=y3;
        w1=x4;
        w2=y4;
         p=(sqrt((u1-v1)*(u1-v1)+(u2-v2)*(u2-v2)))+(sqrt((u1-w1)*(u1-w1)+(u2-w2)*(u2-w2)))+(sqrt((v1-w1)*(v1-w1)+(v2-w2)*(v2-w2)));
        printf("Perimeter = %.2lf",p);
    }
    else if((a3>=a4)&&(a3>=a2)&&(a3>=a1)&&(a1!=0&&a2!=0&&a3!=0&&a4!=0))
    {
        printf("Points having maximum area: (%.0lf,%.0lf),(%.0lf,%.0lf),(%.0lf,%.0lf)\n\n",x3,y3,x4,y4,x1,y1);
      u1=x3;
        u2=y3;
        v1=x4;
        v2=y4;
        w1=x1;
        w2=y1;
     p=(sqrt((u1-v1)*(u1-v1)+(u2-v2)*(u2-v2)))+(sqrt((u1-w1)*(u1-w1)+(u2-w2)*(u2-w2)))+(sqrt((v1-w1)*(v1-w1)+(v2-w2)*(v2-w2)));
        printf("Perimeter = %.2lf",p);
    }
    else if((a4>=a3)&&(a4>=a2)&&(a4>=a1)&&(a1!=0&&a2!=0&&a3!=0&&a4!=0))
    {
        printf("Points having maximum area: (%.0lf,%.0lf),(%.0lf,%.0lf),(%.0lf,%.0lf)\n\n",x4,y4,x1,y1,x2,y2);
         u1=x4;
        u2=y4;
        v1=x1;
        v2=y1;
        w1=x2;
        w2=y2;
     p=(sqrt((u1-v1)*(u1-v1)+(u2-v2)*(u2-v2)))+(sqrt((u1-w1)*(u1-w1)+(u2-w2)*(u2-w2)))+(sqrt((v1-w1)*(v1-w1)+(v2-w2)*(v2-w2)));
        printf("Perimeter = %.2lf",p);
    }
    else if((a1==0)&&(a2==0)&&(a3==0)&&(a4==0))
    {
        printf("Points having maximum area: (%.0lf,%.0lf),(%.0lf,%.0lf),(%.0lf,%.0lf)\n\n",x1,y1,x2,y2,x3,y3);
        printf("Perimeter = 0 (since there is no triangle)");
    }

    return 0;
}
