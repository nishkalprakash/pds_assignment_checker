//Assignment 9
//Section 14
//Name:Sanika Kadam
//Question 1

//To store axis parallel rectangle in structure and find area of rectangle

#include<stdio.h>
typedef struct{
               int x_coord;
               int y_coord;
              }rectangle;

//Function to find area of rectangle

int area(rectangle *P,rectangle *Q)
{
  int temp;
  temp=(Q->x_coord)*(Q->y_coord);
  return temp;
}

int main()
{
   rectangle P,Q;
   
   printf("Enter coordinates of bottom right and top left corners: ");
   scanf("%d %d",&P.x_coord,&P.y_coord);
   scanf("%d %d",&Q.x_coord,&Q.y_coord);

   printf("Area of rectangle: %d\n",area(&P,&Q)); 

   return 0;
}
