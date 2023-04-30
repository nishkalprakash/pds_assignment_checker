#include <stdio.h>//header file
int main()//main function
{
    //asking the user to input four points
    float x1,y1,x2,y2,x3,y3,x4,y4,a1,a2,a3,a4;
    printf("(x1,y1) =");
    scanf("%f%f",&x1,&y1);
    printf("(x2,y2) =");
    scanf("%f%f",&x2,&y2);
    printf("(x3,y3) =");
    scanf("%f%f",&x3,&y3);
    printf("(x4,y4) =");
    scanf("%f%f",&x4,&y4);
    //formula of area of triangle using determinant method
    a1=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    a2=0.5*(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3));
    a3=0.5*(x3*(y4-y1)+x4*(y1-y3)+x1*(y3-y4));
    a4=0.5*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2));
    //the determinant might give us a negative value so multiplying by -1 to make value of area positive
    if (a1<0)
    {
        a1=a1*(-1);
    }
    if (a2<0)
    {
        a2=a2*(-1);
    }
    if (a3<0)
    {
        a3=a3*(-1);
    }
    if (a4<0)
    {
        a4=a4*(-1);
    }
    printf("Points having the minimum area:\n");
    //checking for minimum area
    //%0.2f used to print area uptill 2 decimal places
    if ((a1<=a2) && (a1<=a3) && (a1<=a4))
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n\n",x1,y1,x2,y2,x3,y3);
        printf("Area= %0.2f",a1);


    }
    else if ((a2<=a3) && (a2<=a4) && (a2<=a1))
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n\n",x2,y2,x3,y3,x4,y4);
        printf("Area= %0.2f",a2);


    }
    else if ((a3<=a1) && (a3<=a2) && (a3<=a4))
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n\n",x1,y1,x3,y3,x4,y4);
        printf("Area= %0.2f",a3);


    }
    else
    {
        printf("(%f,%f),(%f,%f),(%f,%f)\n\n",x1,y1,x2,y2,x4,y4);
        printf("Area= %0.2f",a4);


    }
    return 0;

}
