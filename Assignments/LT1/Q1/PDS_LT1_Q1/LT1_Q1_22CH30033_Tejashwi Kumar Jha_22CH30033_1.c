#include<stdio.h>
#include<math.h>

int main()
{

    float  x1,y1,x2,y2,x3,y3,x4,y4,A1,A2,A3,A4,c = -1.0,p;
    printf("x1 = \n");
    scanf("%f",&x1);

    printf("y1 = \n");
    scanf("%f",&y1);

    printf("x2 = \n");
    scanf("%f",&x2);

    printf("y2 = \n");
    scanf("%f",&y2);

    printf("x3 = \n");
    scanf("%f",&x3);

    printf("y3 = \n");
    scanf("%f",&y3);

    printf("x4 = \n");
    scanf("%f",&x4);

    printf("y4= \n");
    scanf("%f",&y4);

    A1 = (x1*(y2-y3) - y1*(x2-x3) + (x2*y3 - x3*y2));

    if (A1 < 0)
    {
        A1 = -A1;
    }
    A2 = (x1*(y2-y4) - y1*(x2-x4) + (x2*y4 - x4*y2));
    if (A2 < 0)
    {
        A2 = -A2;
    }
    A3 = (x1*(y4-y3) - y1*(x4-x3) + (x4*y3 - x3*y4));
    if (A3 < 0)
    {
        A3 = -A3;
    }
    A4 = (x4*(y2-y3) - y4*(x2-x3) + (x2*y3 - x3*y2));
    if (A4 < 0)
    {
        A4 = -A4;
    }

    if (A1 > c)
        c = A1;
    if (A2 > c)
        c = A2;
    if (A3 > c)
        c = A3;
    if (A4 > c)
        c = A4;

        if (c == A1)
        {
            printf("\nPoints having the maximum area: (%0.2f,%0.2f),(%0.2f,%0.2f),(%0.2f,%0.2f)",x1,y1,x2,y2,x3,y3);
            p = (sqrt ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) + sqrt ((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)));
            printf("\nPerimeter = %0.2f",p);


        }
        else if (c == A2)
        {
            printf("\nPoints having the maximum area: (%0.2f,%0.2f),(%0.2f,%0.2f),(%0.2f,%0.2f)",x1,y1,x2,y2,x4,y4);
            p = (sqrt ((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1)) + sqrt ((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4)) + sqrt ((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1)));
            printf("\nPerimeter = %0.2f",p);

        }
        else if (c == A3)
        {
            printf("\nPoints having the maximum area: (%0.2f,%0.2f),(%0.2f,%0.2f),(%0.2f,%0.2f)",x1,y1,x3,y3,x4,y4);
            p = (sqrt ((x4-x1)*(x4-x1) + (y4-y1)*(y4-y1)) + sqrt ((x4-x3)*(x4-x3) + (y4-y3)*(y4-y3)) + sqrt ((x3-x1)*(x3-x1) + (y3-y1)*(y3-y1)));
            printf("\nPerimeter = %0.2f",p);

        }
        else
        {
            printf("\nPoints having the maximum area: (%0.2f,%0.2f),(%0.2f,%0.2f),(%0.2f,%0.2f)",x2,y2,x3,y3,x4,y4);
            p = (sqrt ((x2-x4)*(x2-x4) + (y2-y4)*(y2-y4)) + sqrt ((x2-x3)*(x2-x3) + (y2-y3)*(y2-y3)) + sqrt ((x3-x4)*(x3-x4) + (y3-y4)*(y3-y4)));
            printf("\nPerimeter = %0.2f",p);

        }

}





