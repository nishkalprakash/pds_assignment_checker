//Roll NO.: 23ME10044
//Name: Lalit Karthikeyan M A

#include<stdio.h>
#include<math.h>

int main(){

  int a,b,c,d;

      printf ("Enter the coordinates of bottom-left corner of the rectangle: \n");
  scanf("%d %d",&a, &b);

  printf("Enter the coordinates of top-right corner of the rectangle: \n");
  scanf("%d %d",&c, &d);

  int perim=2*((c-a)+(d-b));

  int area=(c-a)*(d-b);

  printf("The area of rectangle is %d sq.units and the perimeter is %d units. \n", area, perim);

  float p= float(a+c)/2;
  float q= float(b+d)/2;

  printf("The point of intersection of two diagnols is (%0.2f,%0.2f)", p,q);

  return 0;

}

  
