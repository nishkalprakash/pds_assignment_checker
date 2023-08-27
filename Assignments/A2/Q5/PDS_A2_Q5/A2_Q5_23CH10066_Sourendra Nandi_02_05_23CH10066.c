//Roll No. : 23CH10066
//Name : Sourendra Nandi
#include <stdio.h>
int main()
{
  int a,b,c,d,area,perim;
  float p,q;
  printf("Enter the Coordinates of bottom Left corner of Rectangle: ");
  scanf("%d %d",&a,&b);
  printf("Enter the Coordinates of Top Right corner of Rectangle: ");
  scanf("%d %d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("Area of Rectangle = %d \nPerimeter of Rectangle = %d \n",area,perim);
  p=(a+c)/2.0;
  q=(b+d)/2.0;
  printf("Coordinates of point of intersection of diagonals = (%f,%f)\n",p,q);
  return 0;
}
  
  
    
