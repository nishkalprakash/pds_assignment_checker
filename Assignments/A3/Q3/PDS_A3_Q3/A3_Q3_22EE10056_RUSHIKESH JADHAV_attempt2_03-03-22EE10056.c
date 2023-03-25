#include<stdio.h>
#include<math.h>
int main()
{

    double x1,y1,z1,x2,y2,z2,x3,y3,z3,ab,bc,ac;
    printf("Enter x y z co-ordinates of A:");//asks for input
    scanf("%lf %lf %lf",&x1,&y1,&z1);//stores input
    printf("Enter x y z co-ordinates of B:");//asks for input
    scanf("%lf %lf %lf",&x2,&y2,&z2);//stores input
    printf("Enter x y z co-ordinates of C:");//asks for input
    scanf("%lf %lf %lf",&x3,&y3,&z3);//stores input
    printf("A(%lf,%lf,%lf)\n B(%lf,%lf,%lf)\n C(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);//prints co-ordinates
    ab=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1)+(z2-z1)*(z2-z1));//clculates ab
    ac=sqrt(pow(x3-x1,2)+pow(y3-y1,2)+pow(z3-z1,2));//calculates ac
    bc=sqrt(pow(x3-x2,2)+pow(y3-y2,2)+pow(z3-z2,2));//calculates bc
    if(ab==ac+bc || bc==ab+ac || ac==ab+bc)//checking condition
    {
        printf("Three points are collinear\n");
    }else
    {
        printf("Three points are not collinear\n");
    }
     if(x1<x2 && x1<x3)
       {
           if(x2<x3)
           {
           printf("A(%lf,%lf,%lf)<B(%lf,%lf,%lf)<C(%lf,%lf,%lf)",x1,y1,z1,x2,y2,z2,x3,y3,z3);
           }else
           {
               printf("A(%lf,%lf,%lf)<C(%lf,%lf,%lf)<B(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
           }
       }
       if(x2<x3 && x2<x1)
       {
           if(x1<x3)
           {
           printf("B(%lf,%lf,%lf)<A(%lf,%lf,%lf)<C(%lf,%lf,%lf)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
           }else
           {
               printf("B(%lf,%lf,%lf))<C(%lf,%lf,%lf)<A(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
           }
       }
       if(x3<x2 && x3<x1)
       {
           if(x2<x1)
           {
           printf("C(%lf,%lf,%lf)<B(%lf,%lf,%lf)<A(%lf,%lf,%lf)",x2,y2,z2,x1,y1,z1,x3,y3,z3);
           }else
           {
               printf("B(%lf,%lf,%lf))<C(%lf,%lf,%lf)<A(%lf,%lf,%lf)",x1,y1,z1,x3,y3,z3,x2,y2,z2);
           }
       }


    return 0;
}
