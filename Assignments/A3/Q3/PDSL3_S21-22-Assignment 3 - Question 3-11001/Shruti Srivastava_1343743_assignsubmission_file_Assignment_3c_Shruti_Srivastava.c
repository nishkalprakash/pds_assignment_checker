/* Shruti Srivastava
   21EE30025
   Electrical Engg. Dual Degree
   Code Blocks
   Windows 10 */
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
void point(int line1[3],int line2[3],float point1[2],int flag){
  if((line2[0]*line1[1]-line1[0]*line2[1])!=0){
  point1[1]=(line2[0]*line1[2]-line1[0]*line2[2])/(line2[0]*line1[1]-line1[0]*line2[1]);
   point1[0]=(line2[1]*line1[2]-line1[1]*line2[2])/(-line2[0]*line1[1]+line1[0]*line2[1]);
  flag=1;
  }else{
    if((line2[0]*line1[2]-line1[0]*line2[2])!=0){
        point1[0]=0;
        point1[1]=0;
        flag=-1;
    }else{
        flag=0;
        point1[0]=0;
        point1[1]=0;
    }
  }
}
float side(float point1[2],float point2[2]){
  float k = sqrt((point1[0]-point2[0])(point1[0]-point2[0])+(point1[1]-point2[1])(point1[1]-point2[1]));
  return k;
}
int main()
{
   int line1[3],line2[3],line3[3];
   int flag1,flag2,flag3;
   float point1[2],point2[2],point3[2];
   float sides[3];
   float area;
   float s=0;
   printf("Enter the coefficients(a,b,c) of three lines :");
   printf("Line1: \n");
   for(int i=0;i<3;i++){
    scanf("%d",&line1[i]);
   }
   printf("\n");
   printf("Line2: \n");
   for(int i=0;i<3;i++){
    scanf("%d",&line2[i]);
   }
   printf("\n");
   printf("Line3: \n");
   for(int i=0;i<3;i++){
    scanf("%d",&line3[i]);
   }
   point(line1,line2,point1,flag1);
   if(flag1=-1){
     printf("Lines L1 and L2 are parallel, so no points of intersection\n");
     return;
   }else if(flag1=0){
     printf("Lines L1 and L2 are coincident\n");
     return;
   }
   point(line2,line3,point2,flag2);
   if(flag2=-1){
     printf("Lines L2 and L3 are parallel, so no points of intersection\n");
     return;
     printf("Lines L2 and L3 are coincident\n");
     return;
   }
   point(line3,line1,point3,flag3);
   if(flag3=-1){
     printf("Lines L3 and L1 are parallel, so no points of intersection\n");
     return;
   }else if(flag3=0){
     printf("Lines L3 and L1 are coincident\n");
     return;
   }
   sides[0]=side(point1,point2);
   sides[1]=side(point2,point3);
   sides[2]=side(point3,point1);
   for(int i=0;i<3;i++){
    s=s+sides[i];
   }
   s=s/2;
   area=sqrt(s*(s-sides[0])(s-sides[1])(s-sides[2]));
   if(flag1=1){
     printf("Point of intersection between L1 and L2 = (%f,%f)\n",point1[0],point1[1]);
   }else if(flag1=-1){
     printf("Lines L1 and L2 are parallel, so no points of intersection\n");
   }else if(flag1=0){
     printf("Lines L1 and L2 are coincident\n");
   }
   if(flag2=1){
     printf("Point of intersection between L2 and L3 = (%f,%f)\n",point2[0],point2[1]);
   }else if(flag2=-1){
     printf("Lines L2 and L3 are parallel, so no points of intersection\n");
   }else if(flag2=0){
     printf("Lines L2 and L3 are coincident\n");
   }
   if(flag3=1){
     printf("Point of intersection between L3 and L1 = (%f,%f)\n",point3[0],point3[1]);
   }else if(flag3=-1){
     printf("Lines L3 and L1 are parallel, so no points of intersection\n");
   }else if(flag3=0){
     printf("Lines L3 and L1 are coincident\n");
   }
   printf("Side lengths = %f,%f,%f\n",sides[0],sides[1],sides[2]);
   printf("Area = %f\n",area);
   return 0;
}
