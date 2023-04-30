//Section 2
//RollNo:22ME30031
//Name:Jigyanshu Pati
// LAB TEST:1
//description:
#include<stdio.h>
#include<math.h>
int main()//start of the program
{
   int x1,x2,x3,x4,y1,y2,y3,y4;
   float a1,a2,a3,a4,max=0,p1,p2,p3,p4;
   printf("(x1,y1) =");
   scanf("%d%d",&x1,&y1);
   printf("(x2,y2) =");
   scanf("%d%d",&x2,&y2);
   printf("(x3,y3) =");
   scanf("%d%d",&x3,&y3);
   printf("(x4,y4) =");
   scanf("%d%d",&x4,&y4);
   p1=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
   p2=sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2))+sqrt((x4-x3)*(x4-x3)+(y4-y3)*(y4-y3));
   p3=sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4))+sqrt((x3-x4)*(x3-x4)+(y3-y4)*(y3-y4))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3));
   p4=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x4-x2)*(x4-x2)+(y4-y2)*(y4-y2))+sqrt((x1-x4)*(x1-x4)+(y1-y4)*(y1-y4));
   a1=0.5*(x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2));
   if(a1<0)
   {
       a1=-1*a1;
   }
   a2=0.5*(x2*(y3-y4)+x3*(y4-y2)+x4*(y2-y3));
   if(a2<0)
   {
       a2=-1*a2;
   }
   a3=0.5*(x1*(y4-y3)+x4*(y3-y1)+x3*(y1-y4));
   if(a3<0)
   {
       a3=-1*a3;
   }
   a4=0.5*(x1*(y2-y4)+x2*(y4-y1)+x4*(y1-y2));

   if (a1==0 && a2==0 && a3==0 && a4==0)
   {
       printf("perimeter = 0 (since there is no triangle)");
       goto a;
   }
   if (a1==a2)
   {
       printf("Points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
       printf("perimeter =%.2f",p1);
       goto a;
   }

   if(a4<0)
   {
       a4=-1*a4;
   }
   if(a1>max)
   {
       max=a1;
   }
   if(a2>max)
   {
       max=a2;
   }

   if(a3>max)
   {
       max=a3;
   }
   if(a4>max)
   {
       max=a4;
   }
   if(max==a1)
   {
       printf("Points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x3,y3);
       printf("perimeter =%.2f",p1);
   }
   if(max==a2)
   {
       printf("Points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x4,y4,x2,y2,x3,y3);
       printf("perimeter =%.2f",p2);
   }
   if(max==a3)
   {
       printf("Points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x4,y4,x3,y3);
       printf("perimeter =%.2f",p3);
   }
   if(max==a4)
   {
       printf("Points having the maximum area:(%d,%d),(%d,%d),(%d,%d)",x1,y1,x2,y2,x4,y4);
       printf("perimeter =%.2f",p4);
   }

   a:return 0;






}
