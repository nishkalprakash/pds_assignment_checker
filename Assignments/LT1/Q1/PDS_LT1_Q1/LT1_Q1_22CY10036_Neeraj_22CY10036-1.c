/*Name:Neeraj
  Roll No.: 22CY10036
  Section: 2
  Problem No.:01
  Description:largest triangle area and perimeter

*/
#include<stdio.h>
#include<math.h>
int main()
{
   float x1,y1, x2, y2, x3, y3, x4, y4,A1,A2,A3,A4;
   printf("Enter first point(x1, y1):\n");
   scanf("%f ,%f",&x1,&y1);
   printf("Enter second point(x2, y2):\n");
   scanf("%f ,%f",&x2,&y2);
   printf("Enter third point(x3, y3):\n");
   scanf("%f ,%f",&x3,&y3);
   printf("Enter fourth point(x4, y4):\n");
   scanf("%f ,%f",&x4,&y4);


   A1=((x1*y2)-(x2*y1)+(x2*y3)-(x3*y2)+(x3*y1)-(x1*y3))/2;
   A2=((x2*y3)-(x3*y2)+(x3*y4)-(x4*y3)+(x4*y2)-(x2*y4))/2;
   A3=((x1*y3)-(x3*y1)+(x3*y4)-(x4*y3)+(x4*y1)-(x1*y4))/2;
   A4=((x1*y2)-(x2*y1)+(x2*y4)-(x4*y2)+(x4*y1)-(x1*y4))/2;

   if(A1<0)
     A1 = A1*(-1);
   if(A2<0)
     A2 = A2*(-1);
   if(A1<0)
     A3 = A3*(-1);
   if(A1<0)
     A4 = A4*(-1);
   float P;
   if(A1>=A2&&A1>=A3&&A1>=A4){
    printf("Point having the maximum area:(%f , %f),(%f , %f),(%f , %f)\n", x1,y1,x2,y2,x3,y3);
    P = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
    printf("perimeter = %f", P);}
   else if(A2>=A1&&A2>=A3&&A2>=A4){
    printf("Point having the maximum area:(%f , %f),(%f , %f),(%f , %f)\n", x4,y4,x2,y2,x3,y3);
    P = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))+sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3))+sqrt((x2-x4)*(x2-x4)+(y2-y4)*(y2-y4));
    printf("perimeter = %f", P);}
   else if(A3>=A2&&A3>=A1&&A3>=A4){
    printf("Point having the maximum area:(%f , %f),(%f , %f),(%f , %f)\n", x1,y1,x4,y4,x3,y3);
    P = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1))+sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3))+sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    printf("perimeter = %f", P);}
   else if(A4>=A2&&A4>A3&&A4>=A1){
    printf("Point having the maximum area:(%f , %f),(%f , %f),(%f , %f)\n", x1,y1,x2,y2,x4,y4);
    P = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))+sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2))+sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
    printf("perimeter = %f", P);}
    return 0;


}
