//Roll No:23MF10042
//Name:Theyanesh Eswaramoorthy Rajahkrishnan
#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  printf("Enter the coordinates of the bottom left corner:");
  scanf("%d%d",&a,&b);
  printf("Enter the coordinates of the top right corner:");
  scanf("%d%d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("The area and the perimeter  of the rectangle are %d and %d respectively\n",area,perim);
  printf("The point of intersection of the diagonals of the rectangle is (%f,%f)",(a+c)/2.0,(b+d)/2.0);
  return 0;
}
  
