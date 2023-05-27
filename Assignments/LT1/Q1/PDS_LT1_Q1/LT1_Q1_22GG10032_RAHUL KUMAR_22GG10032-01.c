#include<stdio.h>
#include<math.h>
int main()
{
    float x1,x2,x3,x4,y1,y2,y3,y4,A1,A2,A3,A4;
    printf("Enter the coordinates x1 y1 x2 y2 x3 y3 x4 y4 ");
    scanf("%f,%f%f,%f%f,%f%f,%f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
    A1=((0.5)*((x1*(y2-y3))+(x2*(y3-y1))+(x3*(y1-y2))));
    A2=((0.5)*((x2*(y3-y4))+(x3*(y4-y2))+(x4*(y2-y3))));
    A3=((0.5)*((x3*(y4-y1))+(x4*(y1-y3))+(x1*(y3-y4))));
    A4=((0.5)*((x4*(y1-y2))+(x1*(y2-y4))+(x2*(y4-y1))));

    if(A1<0){
        A1=A1*(-1);
    }
    if(A2<0){
        A2=A2*(-1);
    }
    if(A3<0){
       A3=A3*(-1);
    }
    if(A4<0){
        A4=A4*(-1);
    }
    if((A1<A2)&&(A1<A3)&&(A1<A4)){
        printf("Points having minimum area :(%f,%f),(%f,%f),(%f,%f)\n",x1,y1,x2,y2,x3,y3);
        printf("Area = %f\n",A1);
    }
    else if((A2<A1)&&(A2<A3)&&(A2<A4)){
        printf("Points having minimum area :(%f,%f),(%f,%f),(%f,%f)\n",x2,y2,x3,y3,x4,y4);
        printf("Area = %f\n",A2);
    }
    else if((A3<A1)&&(A3<A2)&&(A3<A4)){
        printf("Points having minimum area :(%f,%f),(%f,%f),(%f,%f)\n",x3,y3,x4,y4,x1,y1);
        printf("Area = %f\n",A3);
    }
     else if((A4<A1)&&(A4<A2)&&(A4<A3)){
        printf("Points having minimum area :(%f,%f),(%f,%f),(%f,%f)\n",x4,y4,x1,y1,x2,y2);
        printf("Area = %f\n",A4);
    }
   return 0;
}
