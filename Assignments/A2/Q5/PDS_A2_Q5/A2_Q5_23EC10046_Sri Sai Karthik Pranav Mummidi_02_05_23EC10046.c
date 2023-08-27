//Rollno: 23EC10046
//Name: Mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int a,b,c,d;
  printf("enter bottom left corner of rectangle");
  scanf("%d%d",&a,&b);
  printf("enter top right corner of rectangle");
  scanf("%d%d",&c,&d);
  int area,perim;
  area=(c-a)*(d-b);
  perim=2*(c+d-a-b);
  printf("the area and perimeter of the rectangle are %dsq.units and %dunit\n",area,perim);
  float p,q;
  p=(a+c)/2;
  q=(b+d)/2;
  printf("the point of intersection of diagonals is(%f,%f)",p,q);
  return 0;
}
