/*
sec2
name- Omkar Dilip Desai
Roll no - 22MF3Im06
q. no-1
description- Print the area of smallest of triangle */

#include<stdio.h>
#include<math.h>

int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,a1,a2,a3,area1,area2,area3;
    printf("enter the co-ordinates with space beteen two co-ordinates example x1 y1 \n");
    scanf("%f%f%f%f%f%f%f%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

    a1= 0.5*((x1*(y2-y3))- (y1*(x2-x3)) + (1*(x2*y3-x3*y2)));
    a2= 0.5*((x1*(y2-y4))- (y1*(x2-x4)) + (1*(x2*y4-x4*y2)));
    a3= 0.5* ((x2*(y3-y4))- (y2*(x3-x4)) + (1*(x3*y4-x4*y3)));
   // printf("%f\n",a3);

    if(a1<0)
    {
        area1=a1*(-1);
    }
    if(a2<0)
    {
        area2=a2*(-1);
    }
    if(a3<0)
    {
        area3=a3*(-1);
    }

    /*printf("area1 = %f area2 = %f  area3 = %f\n",area1,area2,area3); */

    if(area1<area2 && area1<area3){
        printf("Points having minimum area : (%f ,%f ), (%f ,%f ), (%f ,%f )\n",x1,y1,x2,y2,x3,y3);
        printf("Area = %f",area1);
    }
    else if(area2<area1 && area2<area3){
        printf("Points having minimum area : (%f ,%f ), (%f ,%f ), (%f ,%f )\n",x1,y1,x2,y2,x4,y4);
        printf("Area = %f",area2);
    }
     else if(area3<area1 && area3<area2){
        printf("Points having minimum area : (%f ,%f ), (%f ,%f ), (%f ,%f )\n",x2,y2,x3,y3,x4,y4);
        printf("Area = %f",area2);
    }






    return 0;
}
