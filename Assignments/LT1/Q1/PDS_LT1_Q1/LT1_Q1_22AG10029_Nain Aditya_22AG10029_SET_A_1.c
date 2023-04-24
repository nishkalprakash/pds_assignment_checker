#include<stdio.h>
#include<math.h>
/* NAME - NAIN ADITYA
ROLL NO- 22AG10029
SECTION 2
LAB TEST QUESTION 1*/
int main(){
    int x1,x2,x3,x4,y1,y2,y3,y4;float det1,det2,det3,det4,max=0;//defining the varaibles
    printf("(x1,y1)=");//user inputs
    scanf("%d%d",&x1,&y1);
    printf("(x2,y2)=");
    scanf("%d%d",&x2,&y2);
    printf("(x3,y3)=");
    scanf("%d%d",&x3,&y3);
    printf("(x4,y4)=");
    scanf("%d%d",&x4,&y4);
    det1=(0.5)*((float)((x1*(y2-y3))-(y1*(x2-x3))+(x2*y3-y2*x3)));//calculating the area value of different combinations
    det2=(0.5)*((x1*(y2-y4))-(y1*(x2-x4))+(x2*y4-y2*x4));
    det3=(0.5)*((x1*(y3-y4))-(y1*(x3-x4))+(x3*y4-y3*x4));
    det4=(0.5)*((x2*(y3-y4))-(y2*(x3-x4))+(x3*y4-y3*x4));
    if (det1<0) det1*=-1;//changing the sign of area if it is neagtive
    if (det4<0) det4*=-1;
    if (det2<0) det2*=-1;
    if (det3<0) det3*=-1;
    if (det1<det2){max=det1;}//finding the least area value
    else max=det2;
    if (det3<max) max=det3;
    if (det4<max) max=det4;
    //printing the points and area corresponding to the lowest area
    if (max==det1){printf("the points that constitute the smallest area are (%d,%d),(%d,%d),(%d,%d)\n the smallest area is %f",x1,y1,x2,y2,x3,y3,max);}
    else if (max==det2){printf("the points that constitute the smallest area are (%d,%d),(%d,%d),(%d,%d)\n the smallest area is %f",x1,y1,x2,y2,x4,y4,max);}
    else if (max==det3){printf("the points that constitute the smallest area are (%d,%d),(%d,%d),(%d,%d)\n the smallest area is %f",x1,y1,x3,y3,x4,y4,max);}
    else if (max==det4){printf("the points that constitute the smallest area are (%d,%d),(%d,%d),(%d,%d)\n the smallest area is %f",x2,y2,x3,y3,x4,y4,max);}
return 0;}
