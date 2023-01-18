/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 9
Description :A program to find the area of the rectangle.
*/

#include<stdio.h>
#include<math.h>

    typedef struct Rect
  {
         float real;
         float img;
  } Rect;
   

   void area(Rect c1, Rect c2)
 {  
 Rect c3;
double A =(sqrt((c2.real-c1.real)*(c2.real-c1.real))*sqrt((c2.img-c1.img)*(c2.img-c1.img)));     
 printf("%lf",A);

 }

int main()
{
    Rect c1,c2;
    printf("enter the coordinates of two points of axis-parallel rectangle : ");
    printf("\n");
    printf("Point 1 : ");
    scanf("%f %f",&c1.real,&c1.img);
    printf("Point 2 : ");
    scanf("%f %f",&c2.real,&c2.img);
   
    area(c1,c2);
    
    return 0;

}

    



