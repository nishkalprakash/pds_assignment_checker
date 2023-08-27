#include<stdio.h>

int main(){
  int a,b,c,d;
  printf("this program is to tell the area and perimeter of a rectange formed when the coordinates of bottom-left corner and top-right corner is given \n");
  printf("enter the coordinates of bottom-left corner(a,b) \n");
  scanf("%d%d",&a,&b);
  printf("enter the coordinates of top-right corner(c,d) \n");
  scanf("%d%d",&c,&d);
  int area = (c-a)*(d-b);
  int perim = ((c-a)+(d-b))*2;
  if(area<0) area = area*(-1);
  if(perim<0) perim=perim*(-1);
  printf("the area is %d and perimeter is %d \n",area,perim);
  float p = (a+c)/2.0;
  float q = (b+d)/2.0;
  printf("the point of intersection of diagonals is( %f , %f ) \n",p,q);
 
  return 0;
}
