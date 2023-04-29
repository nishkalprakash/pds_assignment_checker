#include<stdio.h>
int main()
{
     int x1,y1,x2,y2,x3,y3,x4,y4;
    printf("Enter first point : ");
    scanf("%d,%d",&x1,&y1);
   printf("Enter second point : ");
    scanf("%d,%d",&x2,&y2);
    printf("Enter third point : ");
    scanf("%d,%d",&x3,&y3);
    printf("Enter fourth point : ");
    scanf("%d,%d",&x4,&y4);
    float a1,a2,a3,a4;
    a1 = 0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
    a2 = 0.5*(x4*(y2-y3)+x2*(y3-y4)+x3*(y4-y2));
    a3 = 0.5*(x4*(y1-y3)+x1*(y3-y4)+x3*(y4-y1));
    a4 = 0.5*(x4*(y2-y1)+x2*(y1-y4)+x1*(y4-y2));
    if(a1<0) a1 = -a1;
    if(a2<0) a2 = -a2;
    if(a3<0) a3 = -a3;
    if(a4<0) a4 = -a4;

    float min=a1;
    if(a2<=min) min=a2;
    if(a3<=min) min=a3;
    if(a4<=min) min=a4;
    if(min==a1) {printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
    printf("\n");
    printf("Area = %f",min);}
    else if(min==a2) {printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)",x4,y4,x2,y2,x3,y3);
    printf("\n");
    printf("Area = %f",min);}
    else if(min==a3) {printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)",x1,y1,x4,y4,x3,y3);
    printf("\n");
    printf("Area = %f",min);}
    else if(min==a4) {printf("Points having the minimum area : (%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
    printf("\n");
    printf("Area = %f",min);}
    return 0;
}