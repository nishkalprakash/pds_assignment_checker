#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,x3,x4,y1,y2,y3,y4;
    printf("(x1 , y1) = ");
    scanf("%d,%d", &x1,&y1);
    printf("(x2 , y2) = ");
    scanf("%d,%d", &x2,&y2);
    printf("(x3 , y3) = ");
    scanf("%d,%d", &x3,&y3);
    printf("(x4 , y4) = ");
    scanf("%d,%d", &x4,&y4);
    double a,b,c,d;
    a = 0.5 * (x1*(y2 - y3) - y1*(x2 - x3) + ((x2 * y3) - (y2 * x3)));
    b = 0.5 * (x2*(y3 - y4) - y2*(x3 - x4) + ((x3 * y4) - (y3 * x4)));
    c = 0.5 * (x3*(y4 - y1) - y3*(x4 - x1) + ((x4 * y1) - (y4 * x1)));
    d = 0.5 * (x1*(y2 - y4) - y1*(x2 - x4) + ((x2 * y4) - (y2 * x4)));
   double p1,p2,p3,p4;
   p1 = (sqrt((x1 - x2)*(x1-x2) - (y1 - y2)*(y1 - y2)) + sqrt((x2 - x3)*(x2-x3) - (y2 - y3)*(y2 - y3)) + sqrt((x3 - x1)*(x3-x1) - (y3 - y1)*(y3 - y1)));
   p2 = (sqrt((x2 - x3)*(x2-x3) - (y2 - y3)*(y2 - y3)) + sqrt((x3 - x4)*(x3-x4) - (y3 - y4)*(y3 - y4)) + sqrt((x4 - x2)*(x4-x2) - (y4 - y2)*(y4 - y2)));
   p3 = (sqrt((x3 - x4)*(x3-x4) - (y3 - y4)*(y3 - y4)) + sqrt((x4 - x1)*(x4-x1) - (y4 - y1)*(y4 - y1)) + sqrt((x1 - x3)*(x1-x3) - (y1 - y3)*(y1 - y3)));
   p4 = (sqrt((x4 - x1)*(x4-x1) - (y4 - y1)*(y4 - y1)) + sqrt((x1 - x3)*(x1-x3) - (y1 - y3)*(y1 - y3)) + sqrt((x3 - x4)*(x3-x4) - (y3 - y4)*(y3 - y4)));
    if(a >= b && a >= c && a >= d)
    {
        printf("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d) \n", x1,y1,x2,y2,x3,y3);
    printf("Perimeter = %f",p1);
    }
    else if(b >= a && b >= c && b >= d)
    {
        printf("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d) \n", x2,y2,x3,y3,x4,y4);
    printf("Perimeter = %f",p2);
    }
    else if(c >= a && c >= b && c >= d)
    {
        printf("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d) \n", x3,y3,x4,y4,x1,y1);
    printf("Perimeter = %f",c);
    }
    else if(d >= a && d >= b && d >= p3)
    {
        printf("Points having the maximum area : (%d,%d),(%d,%d),(%d,%d) \n", x1,y1,x2,y2,x3,y3);
    printf("Perimeter = %f",p4);
    }
    return 0;
}
