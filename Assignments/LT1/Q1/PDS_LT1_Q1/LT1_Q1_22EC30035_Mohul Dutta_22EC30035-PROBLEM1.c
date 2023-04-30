/*Name- Mohul Dutta
Roll no. - 22EC30035
Problem 1
Description- fnding smallest area of the three points*/
#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,x3,y3,x4,y4;
    printf("(x1,y1) =");
    scanf("%f%f",&x1,&y1);
    printf("(x2,y2) =");
    scanf("%f%f",&x2,&y2);
    printf("(x3,y3) =");
    scanf("%f%f",&x3,&y3);
    printf("(x4,y4) =");
    scanf("%f%f",&x4,&y4);
    float a1=fabs(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3))/2;
    float a2=fabs(x1*(y3-y4)+x3*(y4-y1)+x4*(y1-y3))/2;
    float a3=fabs(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2))/2;
    float a4=fabs(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2))/2;
    int i1,i2,i;
    float min1,min2;
    if(a1>=a2){
        i1=2;
        min1=a2;
    }
    else{
        i1=1;
        min1=a1;
    }
    if(a3>=a4){
        i2=4;
        min2=a4;
    }
    else{
        i2=3;
        min2=a3;
    }
    if(min1>=min2)
        i=i2;
    else
        i=i1;
    switch(i){
case 4:
    printf("Points having the minimum area: (%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f)\n\n",x1,y1,x2,y2,x3,y3);
    printf("Area=%0.2f",a4);
    break;


case 3:
    printf("Points having the minimum area: (%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f)\n\n",x1,y1,x2,y2,x4,y4);
    printf("Area=%0.2f",a3);
    break;
case 2:
    printf("Points having the minimum area: (%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f)\n\n",x1,y1,x3,y3,x4,y4);
    printf("Area=%0.2f",a2);
    break;

case 1:
    printf("Points having the minimum area: (%0.1f,%0.1f),(%0.1f,%0.1f),(%0.1f,%0.1f)\n\n",x2,y2,x3,y3,x4,y4);
    printf("Area=%0.2f",a1);
    break;

}
}


