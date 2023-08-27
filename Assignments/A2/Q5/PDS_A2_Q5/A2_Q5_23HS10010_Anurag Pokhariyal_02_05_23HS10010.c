//Roll no: 23HS10010
//Name: Anurag Pokhariyal
#include <stdio.h>
int main()
{
  int a,b,c,d,area,perimeter;
  float p,q;
  printf("Enter the coordinates of the bottom left corner in (x,y) format:\n");
  scanf("%d %d",&a,&b);
  printf("Enter the coordinates of the top right corner in (x,y) format:\n");
  scanf("%d %d",&c,&d);
  area = (c -a)*(d-b);
  perimeter = 2*((c-a)+(d-b));
  printf("The area of the rectangle is %d square units\nThe perimeter is %d units\n",area,perimeter);
  p =a +(c-a)/2.0;
  q =b +(d-b)/2.0;
  printf("The coordinates of the diagonals of the rectangle in the (x,y) format is\n(%f,%f)",p,q);
  return 0;
}
    
