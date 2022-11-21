#include<stdio.h>
#include<math.h>//including library
int main()
{
  int Y, n;
  double distance1, distance2, distance3;//declaring 
  printf("Enter the value of height Y");
  scanf("%d", &Y);
  printf("Enter the number of bounces n");
  scanf("%d", &n);
  distance1= (Y*(1-distance3));// formula divided in 3 parts. formula is (Y(1-((1/4)^n))/(3/4). 
  distance3= pow((0.25),n);
 distance2= distance1*(1.33);
 printf("Total distance travelled is %lf", distance2);
 }
  

