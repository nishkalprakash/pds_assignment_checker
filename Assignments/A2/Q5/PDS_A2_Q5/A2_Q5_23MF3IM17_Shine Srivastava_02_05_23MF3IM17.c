//Roll no. : 23MF3IM17
//NAME : SHINE SRIVASTAVA

#include<stdio.h>
int main()
{
  int a,b,c,d,len,brea,area,perim;
  float p,q;
  
  printf("Enter the bottom left corner of rectangle :\n");
  scanf("%d %d",&a,&b);

  printf("Enter the top right corner of rectangle :\n");
  scanf("%d %d",&c,&d);

  len=d-b;
  brea=c-a;
  perim = 2*(len+brea);
  area = len*brea;

  printf("Area of rectangle:%d and Perimeter of rectangle:%d\n",area,perim);

  q=(float)(d+b)/2;//intersection of diagonals is midpoint of diagonals
  p=(float)(a+c)/2;

  printf("Coordinates of point of intersection of two diagonals is (%f,%f)\n",p,q);
  return 0;
}

  

  
  

  
  
  
