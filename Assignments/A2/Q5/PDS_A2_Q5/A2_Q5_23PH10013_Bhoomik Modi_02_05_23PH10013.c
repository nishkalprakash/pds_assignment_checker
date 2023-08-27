// Roll_No. : 23PH10013
// Name : Bhoomik Modi
#include<stdio.h>// Invoking the header file

int main(){// creating main function
  int a,b,c,d;
  float p,q; //The mid_point of the diagonal
  int area;
  int perim;
  printf("Enter the bottom left coordinate of the rectangle(leave a space between two) : ");
  scanf("%d%d",&a,&b);
  printf("Enter the top right coordinate of the rectangle(leave a space between two) : ");
  scanf("%d%d",&c,&d);
  perim = 2*((c-a)+(d-b));
  area = ((c-a)*(d-b));
  printf("Area = %d \nPerimeter = %d \n",area,perim);
  p=(c+a)/2.0;
  q=(b+d)/2.0;
  printf("The coordinate of  intersection of the diagonal is (%f,%f)",p,q);
  return 0;
}
