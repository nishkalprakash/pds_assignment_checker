#include <stdio.h>
#include <math.h>

int main()
{
    int x1,y1;
    int x2,y2;
    int x3,y3;
    int x4,y4;
    float A1,A2,A3,A4;
    printf("(x1,y1) = ");
    scanf("%d, %d",&x1,&y1);

    printf("\n(x2,y2) = ");
    scanf("%d, %d",&x2,&y2);

    printf("\n(x3,y3) = ");
    scanf("%d, %d",&x3,&y3);

    printf("\n(x4,y4) = ");
    scanf("%d, %d",&x4,&y4);

    /*Calculation of Area of all the 4 possible triangles*/
    A1=0.5*(x1*y2-x2*y1+x2*y3-x3*y2+x3*y1-x1*y3);
    A2=0.5*(x2*y3-x3*y2+x3*y4-x4*y3+x4*y2-x2*y4);
    A3=0.5*(x3*y4-x4*y3+x4*y1-x1*y4+x1*y3-x3*y1);
    A4=0.5*(x4*y1-x1*y4+x1*y2-x2*y1+x2*y4-x4*y2);

    /*Code to take modulus of each Area taken*/
    if (A1<0) A1=A1*-1;
    if (A2<0) A2=A2*-1;
    if (A3<0) A3=A3*-1;
    if (A4<0) A4=A4*-1;

    /*Comparing Areas to find the smallest area*/
    if ((A1<=A2) && (A1<=A3) && (A1<=A4))
    {
    printf("Points having the minimum area: (%d,%d),(%d,%d),(%d.%d)\n",x1,y1,x2,y2,x3,y3);
    printf("Area = %.2f",A1);
    }

    else if ((A2<=A1) && (A2<=A3) && (A2<=A4))
    {
        printf("Points having the minimum area: (%d,%d),(%d,%d),(%d.%d)\n",x2,y2,x3,y3,x4,y4);
        printf("Area = %.2f",A2);
    }


    else if ((A3<=A1) && (A3<=A2) && (A3<=A4))
    {
        printf("Points having the minimum area: (%d,%d),(%d,%d),(%d.%d)\n",x3,y3,x4,y4,x1,y1);
        printf("Area = %.2f",A3);
    }


    else if ((A4<=A1) && (A4<=A3) && (A4<=A2))
    {
        printf("Points having the minimum area: (%d,%d),(%d,%d),(%d.%d)\n",x4,y4,x1,y1,x2,y2);
        printf("Area = %.2f",A4);
    }



}
