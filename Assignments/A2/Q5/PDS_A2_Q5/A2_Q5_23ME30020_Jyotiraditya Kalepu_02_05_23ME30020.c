//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int a,b,c,d,area=0,perim=0,len=0,bred=0;                      // Initiallising variables
  printf("Please enter the coordinates of the bottom left corner : ");
  scanf("%d %d", &a,&b);
  printf("\nPlease enter the coordinates of the top right corner : ");
  scanf("%d %d", &c,&d);
  len = c-a;              // Finding the length of the rectangle
  if(len<0)len = -len;    
  bred = d-b;             // Finding the bredth of the rectangle
  if(bred<0)bred = -bred;
  area = len*bred;
  perim = 2*(len + bred);
  printf("\nArea of the rectangle : %d \nPerimeter of the rectangle : %d",area,perim);
  printf("\nCoordinates of the point of intersection of the two diagonals :(%1.3f,%1.3f)\n",(a+c)/2.0,(b+d)/2.0);
  return 0;
}
