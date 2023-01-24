/*
* Section 14
* Roll No : 22EE30007
* Name : Debarpita Saha
* Assignment No : 9
* Description : Program to find if circles intersect or not
*/
#include<stdio.h>
#include<math.h>
struct circle
{
  int x;
  int y;
  float r;
};
 
struct circle c1,c2;

int isIntersectingCircle(struct circle c1, struct circle c2)
{
  float c= pow((c1.x - c2.x),2) + pow((c1.y-c2.y),2);
  if((c1.r+ c2.r) > sqrt(c))
  return 1;
  else
  return 0;
}
 
int main()
{
  printf("enter data of 1st circle");
  scanf("%d %d %f", &c1.x, &c1.y, &c1.r);
  scanf("%d %d %f", &c2.x, &c2.y, &c2.r);
  int z= isIntersectingCircle(c1, c2);
  if(z==1)
   printf("Circles Intersect");
  else
   printf("Circles DONT Intersect");
 return 0;
}
