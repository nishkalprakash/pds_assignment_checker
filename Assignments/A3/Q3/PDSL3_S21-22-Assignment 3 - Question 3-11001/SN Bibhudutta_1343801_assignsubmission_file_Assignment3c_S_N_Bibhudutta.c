// S N Bibhudutta
// 21EC30043
// E&ECE Department 
// Package: Codeblocks
// Assignment 3

#include<stdio.h>
#include<math.h>

float PointX(float a1,float b1,float c1,float a2,float b2,float c2)
{
     float numerator=b1*c2-b2*c1;
     float denominator=a1*b2-a2*b1;

     return numerator/denominator;
}
float PointY(float a1,float b1,float c1,float a2,float b2,float c2)
{
     float numerator=c1*a2-c2*a1;
     float denominator=a1*b2-a2*b1;

     return numerator/denominator;
}

float dist(float x1, float y1,float x2,float y2)
{
   return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}

float Cal_Area(float a,float b, float c)
{
    float s=(a+b+c)/2;
    return sqrt(s*(s-a)*(s-b)*(s-c));

}
int check(float a1, float b1,float c1, float a2,float b2,float c2)
{
    if(a1*b2!=b1*a2)
     return 0;
     
    if(a1*c2!=c1*a2)
     return 1;

    return 2;

}

int main()
{
      float a1,b1,c1;
      float a2,b2,c2;
      float a3,b3,c3;

      printf("\n Enter the coefficent of a,b,c of 3 lines ");
      printf("\nLine1: ");
      scanf("%f%f%f",&a1,&b1,&c1);
      printf("\nLine2: ");
      scanf("%f%f%f",&a2,&b2,&c2);
      printf("\nLine3: ");
      scanf("%f%f%f",&a3,&b3,&c3);
      
      if(check(a1,b1,c1,a2,b2,c2))
      {
          if(check(a1,b1,c1,a2,b2,c2)==1)
          printf("\nLine 1 and 2 are parallel,no intersection points");
          else
          printf("\nLine 1 and 2 are coincident");

          return 0;
      }
      if(check(a3,b3,c3,a2,b2,c2))
      {
          if(check(a3,b3,c3,a2,b2,c2)==1)
          printf("\nLine 2 and 3 are parallel,no intersection points");
          else
          printf("\nLine 2 and 3 are coincident");

          return 0;
      }
       if(check(a3,b3,c3,a1,b1,c1))
      {
          if(check(a3,b3,c3,a1,b1,c1)==1)
          printf("\nLine 1 and 3 are parallel,no intersection points");
          else
          printf("\nLine 1 and 3 are coincident");

          return 0;
      }
      
      //CALUCLATION OF POINTS
      float x1=PointX(a1,b1,-c1,a2,b2,-c2),y1=PointY(a1,b1,-c1,a2,b2,-c2);
      float x2=PointX(a2,b2,-c2,a3,b3,-c3),y2=PointY(a2,b2,-c2,a3,b3,-c3);
      float x3=PointX(a1,b1,-c1,a3,b3,-c3),y3=PointY(a1,b1,-c1,a3,b3,-c3);

      float side1=dist(x1,y1,x2,y2);
      float side2=dist(x3,y3,x2,y2);
      float side3=dist(x1,y1,x3,y3);

      float area=Cal_Area(side1,side2,side3);

      printf("\nPoint of intersection between L1 and L2 = (%f ,%f ).",x1,y1);
      printf("\nPoint of intersection between L2 and L3 = (%f ,%f ).",x2,y2);
      printf("\nPoint of intersection between L3 and L1 = (%f ,%f ).",x3,y3);
      
      printf("\nSide Lengths = %f ,%f ,%f.",side1,side2,side3);

      printf("\nArea = %f",area);

      return 0;
}