/*KETHAVATH SHIVAKUMAR
21MI31013*/
#include <stdio.h>
#include <math.h>
float inter_y(int p1,int q1,int r1,int p2,int q2, int r2){
int flag=0;
float y;
 if ((p1/q1)==(p2/q2))
 {
    flag=1;

 }
 else

 {
 y=((p1*r2)-(p2*r1))/((q2*p1)-(q1*p2));

 }
 return y;

}
 float inter_x(int p1,int q1,int r1,int p2,int q2, int r2)

{
    int flag=0;
float x;
 if ((p1/q1)==(p2/q2))

 {
    flag=1;

 }

 else

 {
 x=((q2*r1)-(q1*r2))/((q2*p1)-(q1*p2));
 }

 return x;

}
int main()
{
   int p1,p2,p3,q1,q2,q3,r1,r2,r3;
   float x1,x2,x3,y1,y2,y3,L1,L2,L3,side,area;
   float inter_y(int p1,int q1,int r1,int p2,int q2, int r2);
   float inter_x(int p1,int q1,int r1,int p2,int q2, int r2);

  printf("enter coffiecients of line 1- ");
 scanf("%d%d%d",&p1,&q1,&r1);
printf("enter  coffiecients of line1- ");
scanf("%d%d%d",&p2,&q2,&r2);
printf("enter coffiecients of line1- ");
scanf("%d%d%d",&p3,&q3,&r3);
x1=inter_x(p1,q1,r1,p2,q2,r2);
x2=inter_x(p2,q2,r2,p3,q3,r3);
x3=inter_x(p3,q3,r3,p1,q1,r1);
y1=inter_y(p1,q1,r1,p2,q2,r2);
y2=inter_y(p2,q2,r2,p3,q3,r3);
y3=inter_y(p3,q3,r3,p1,q1,r1);
printf("point of intersection of line 1 & line 2-(%f,%f)",x1,y1);
printf("point of intersection of line 2 & line 3-(%f,%f)",x2,y3);
printf("point of intersection of line 3 & line 1-(%f,%f)",x3,y3);
  L1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
L2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));   /*L1 is length between (X1,Y1)& (X2,Y2)
                                           L2 is length between (X2,Y2)& (X3,Y3)
                                          L3 is length between (X1,Y1)& (X3,Y3)*/
L3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
 side=((L1+L2+L3)/2);

    area=sqrt(side*(side-L1)*(side-L2)*(side-L3));
    printf("the area is %f",area);
    return 0;
}
