/*This program is to find area of the triangle*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
float interctionx(float a1,float b1,float c1,float a2,float b2,float c2)
{
   float x,k1,k2;
   if(a2!=0&&b2!=0)
   {
     k1=a1/a2;
     k2=b1/b2;
     if(k1!=k2)
     {
        x=(b2*c1-b1*c2)/(a1*b2-a2*b1);
        return x;
     }
     else
     printf("Parallel lines");
   }
   else
   printf("Not a line");
 }
float interctiony(float a1,float b1,float c1,float a2,float b2,float c2)
{
   float y,k1,k2;

   if(a2!=0&&b2!=0)
   {
     k1=a1/a2;
     k2=b1/b2;
     if(k1!=k2)
     {
        y=(a1*c1-a2*c2)/(a1*b2-a2*b1);
        return y;
     }
     else
     printf("Parallel lines");
   }
   else
   printf("Not a line");
}
void main()
{
   float t1[3],t2[3],t3[3],x12,y12,x23,y23,x31,y31,area;
   int i;
   printf("Enter the coefficients (a, b, c) of three lines : \n");
   printf("Line 1 : ");
   for(i=0;i<3;i++)
   scanf("%f",t1[1]);
   printf("Line 2 : ");
   for(i=0;i<3;i++)
   scanf("%f",t2[1]);
   printf("Line 3 : ");
   for(i=0;i<3;i++)
   scanf("%f",t3[1]);
   x12=interctionx(t1[1],t1[2],t1[3],t2[1],t2[2],t2[3]);
   y12=interctiony(t1[1],t1[2],t1[3],t2[1],t2[2],t2[3]);
   x23=interctionx(t2[1],t2[2],t2[3],t3[1],t3[2],t3[3]);
   y23=interctiony(t2[1],t2[2],t2[3],t3[1],t3[2],t3[3]);
   x31=interctionx(t3[1],t3[2],t3[3],t1[1],t1[2],t1[3]);
   y31=interctiony(t3[1],t3[2],t3[3],t1[1],t1[2],t1[3]);
   area=0.5*(x12*(y23-y31)+x23*(y31-y12)+x31*(y12-y23));
   printf("Area is : %f \n",area);
}
