#include<stdio.h>
int main()
{
    double x1,x2,x3,y1,y2,y3,z1,z2,z3,A1;
    printf("Enter the values of coordinates(x1,y1,z1):");
    scanf("%lf%lf%lf",&x1,&y1,&z1);
    printf("Enter the values of coordinates(x2,y2,z2):");
    scanf("%lf%lf%lf",&x2,&y2,&z2);
 printf("Enter the values of coordinates(x3,y3,z3):");
    scanf("%lf%lf%lf",&x3,&y3,&z3);
    printf("A(x1,y1,z1)=(%lf,%lf,%lf)\nB(x2,y2,z2)=(%lf,%lf,%lf)\nC(x3,y3,z3)=(%lf,%lf,%lf)\n",x1,y1,z1,x2,y2,z2,x3,y3,z3);
    A1= 0.5*((x1*((y2*z3)-(z2*y3))-(x2*((y1*z3)-(y3*z1)))+(x3*((y1*z2)-(y2*z1)))));
    if(A1==0){printf("The given three points are collinear");

    }

    else{
       printf("The given three points are  not collinear");
    }

return 0;
};

