/*
Name:Chandrabali Biswas
Roll No:22EC30015
Section:2
Problem 1
Description:Area of triangle
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4,b1,b2,b3,b4,c1,c2,c3,c4,s1,s2,s3,s4,A1,A2,A3,A4;   //declaring variables
    printf("Enter the four points(x,y):");
    scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);   //taking input from user
    a1=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));   //storing lengths of sides of the 4 triangles
    b1=sqrt((x2-x3)*(x2-x3)+(y2-y3)*(y2-y3));
    c1=sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    s1=(a1+b1+c1)/2.0;
    A1=sqrt(s1*(s1-a1)*(s1-b1)*(s1-c1));    //area of 1st triangle
    a2=b1;
    b2=sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4));
    c2=sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    s2=(a2+b2+c2)/2.0;
    A2=sqrt(s2*(s2-a2)*(s2-b2)*(s2-c2));    //area of 2nd triangle
    a3=b2;
    b3=sqrt((x4-x1)*(x4-x1)+(y4-y1)*(y4-y1));
    c3=c1;
    s3=(a3+b3+c3)/2.0;
    A3=sqrt(s3*(s3-a3)*(s3-b3)*(s3-c3));     //area of 3rd triangle
    a4=b3;
    b4=a1;
    c4=c2;
    s4=(a4+b4+c4)/2.0;
    A4=sqrt(s4*(s4-a4)*(s4-b4)*(s4-c4));     //area of 4th triangle
    if(A1>=A2 && A1>=A3 && A1>=A4)    //checking for the triangle with the largest area
        {
            printf("Points having the maximum area:(%lf,%lf),(%lf,%lf),(%lf,%lf)\n",x1,y1,x2,y2,x3,y3);
            if(a1+b1<=c1 || b1+c1<=a1 || a1+c1<=b1)   //checking if sum of any 2 sides is less than or equal to the 3rd side
                printf("Perimeter = 0 (since there is no triangle)");
            else
                printf("Perimeter = %lf",a1+b1+c1);
        }
    else if(A2>=A1 && A2>=A3 && A2>=A4)
        {
            printf("Points having the maximum area:(%lf,%lf),(%lf,%lf),(%lf,%lf)\n",x2,y2,x3,y3,x4,y4);
            if(a2+b2<=c2 || b2+c2<=a2 || a2+c2<=b2)
                printf("Perimeter = 0 (since there is no triangle)");
            else
                printf("Perimeter = %lf",a2+b2+c2);
        }
    else if(A3>=A1 && A3>=A2 && A3>=A4)
    {
        printf("Points having the maximum area:(%lf,%lf),(%lf,%lf),(%lf,%lf)\n",x1,y1,x3,y3,x4,y4);
        if(a3+b3<=c3 || b3+c3<=a3 || a3+c3<=b3)
                printf("Perimeter = 0 (since there is no triangle)");
        else
                printf("Perimeter = %lf",a3+b3+c3);
    }
    else
       {
        printf("Points having the maximum area:(%lf,%lf),(%lf,%lf),(%lf,%lf)\n",x1,y1,x2,y2,x4,y4);
        if(a4+b4<=c4 || b4+c4<=a4 || a4+c4<=b4)
                printf("Perimeter = 0 (since there is no triangle)");
        else
                printf("Perimeter = %lf",a4+b4+c4);
       }
       return 0;     //end
}
