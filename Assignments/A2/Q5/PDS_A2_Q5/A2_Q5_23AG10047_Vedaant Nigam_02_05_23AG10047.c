#include <stdio.h>
int main()
{
  int a,b,c,d,l,h,area,perim;
  float p,q;
  printf("enter the bottom left coordinates\n");
  scanf("%d%d",&a,&b);
  printf("the bottom left coordinate is (%d,%d)\n",a,b);
  printf("enter top right coordinates\n");
  scanf("%d%d",&c,&d);
 printf("the top right coordinate is (%d,%d)\n",c,d);
 l=c-a;
 h=d-b;
 area=l*h;
 perim=2*(l+h);
 p=a+c/2.0;
 q=b+d/2.0;
 printf("the area of the rect is=%d\n the perimeter of rect=%d\n",area,perim);
 printf("the point of intersection of diagonals is (%f,%f)",p,q);
   return 0 ;
}
 
 
 
  
