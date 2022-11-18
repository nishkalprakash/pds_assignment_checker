/* NAME- SATYAJIT BEHERA
   ROLL NO-21AG10034
   DEPT- AGRICULTURE AND FOOD ENGINEERING
   SECTION-03
   SOFTWARE- code block*/
#include <stdio.h>
#include <math.h>
float inter_y (int a1,int b1,int c1,int a2,int b2, int c2){
int flag=0;
float y;
 if ((a1/b1)==(a2/b2))
 {
    flag=1;
 }
 else
 {
 y=((a1*c2)-(a2*c1))/((b2*a1)-(b1*a2));
 }
 return y;
}
 float inter_x (int a1,int b1,int c1,int a2,int b2,int c2)

{
    int flag=0;
float x;
 if ((a1/b1)==(a2/b2))
 {
    flag=1;
 }
 else
 {
 x=((b2*c1)-(b1*c2))/((b2*a1)-(b1*a2));
 }
 return (x);

}
int main()
{
int a1,a2,a3,b1,b2,b3,c1,c2,c3;
float x1,x2,x3,y1,y2,y3,L1,L2,L3,side,area;
float inter_y(int a1,int b1,int c1,int a2,int b2, int c2);
float inter_x(int a1,int b1,int c1,int a2,int b2, int c2);

printf("enter the coffiecients of line1- ");
scanf("%d%d%d",&a1,&b1,&c1);
printf("enter the coffiecients of line1- ");
scanf("%d%d%d",&a2,&b2,&c2);
printf("enter the coffiecients of line1- ");
scanf("%d%d%d",&a3,&b3,&c3);
x1=inter_x(a1,b1,c1,a2,b2,c2);/*x1,y1 is the poimt of intersection of L1 and L2
                                x2,y2 is the poimt of intersection of L3 and L2
                                x3,y3 is the poimt of intersection of L1 and L3*/
x2=inter_x(a2,b2,c2,a3,b3,c3);
x3=inter_x(a3,b3,c3,a1,b1,c1);
                               /*function inter_x and inter_y is for calculating the cordinates of point of intersection*/
y1=inter_y(a1,b1,c1,a2,b2,c2);
y2=inter_y(a2,b2,c2,a3,b3,c3);
y3=inter_y(a3,b3,c3,a1,b1,c1);
printf("THE POINT OF INTERSECTION OF LINE 1 AND LINE 2-(%f,%f)",x1,y1);
printf("THE POINT OF INTERSECTION OF LINE 2 AND LINE 3-(%f,%f)",x2,y3);
printf("THE POINT OF INTERSECTION OF LINE 3 AND LINE 1-(%f,%f)",x3,y3);
L1=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
L2=sqrt(pow((x2-x3),2)+pow((y2-y3),2));/*L1 ISTHE LENTH B/W (X1,Y1)AND (X2,Y2)
                                         L2 ISTHE LENTH B/W (X2,Y2)AND (X3,Y3)
                                         L3 ISTHE LENTH B/W (X1,Y1)AND (X3,Y3)*/
L3=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
side=((L1+L2+L3)/2);

    area=sqrt(side*(side-L1)*(side-L2)*(side-L3));
    printf("the area is %f",area);
    return 0;


}
