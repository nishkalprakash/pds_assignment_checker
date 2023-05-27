#include <stdio.h>
#include <math.h>
void main()
{
    int x1,y1,x2,y2,x3,y3,x4,y4;
    double Area,A1,A2,A3,A4;
    printf("(x1,y1) =\n");

    printf("(x2,y2) =\n");

    printf("(x3,y3) =\n");

    printf("(x4,y4) =\n");

    scanf("%d,%d",&x1,&y1);
    printf("%d,%d\n",x1,y1);

    scanf("%d,%d",&x2,&y2);
    printf("%d,%d\n",x2,y2);

    scanf("%d,%d",&x3,&y3);
    printf("%d,%d\n",x3,y3);

    scanf("%d,%d",&x4,&y4);
    printf("%d,%d\n",x4,y4);

    A1=0.5*(x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2));
    A2=0.5*(x2*(y3-y4) + x3*(y4-y2) + x4*(y2-y3));
    A3=0.5*(x3*(y4-y1) + x4*(y1-y3) + x1*(y3-y4));
    A4=0.5*(x4*(y1-y2) + x1*(y2-y4) + x2*(y4-y1));

    if(A1>A2){if((A1>A3)&&(A1>A4))
    Area=A1;}
    //printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",(x1,y1),(x2,y2),(x3,y3));
    else if(A2>A1){if((A2>A3)&&(A2>A4))
    Area=A2;}
    //printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",(x2,y2),(x3,y3),(x4,y4));
    else if(A3>A1){if((A3>A2)&&(A3>A4))
    Area=A3;}
    //printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",(x3,y3),(x4,y4),(x1,y1));
    else Area=A4;
    //printf("Points having the minimum area: (%d,%d),(%d,%d),(%d,%d)\n",(x4,y4),(x1,y1),(x2,y2));
    printf("Area=%lf\n",Area);
    }