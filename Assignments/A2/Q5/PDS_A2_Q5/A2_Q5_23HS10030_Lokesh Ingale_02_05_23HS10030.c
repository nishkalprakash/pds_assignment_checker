//Roll no:23HS10030
//Name:Lokesh Nitin Ingale
#include<stdio.h>
int main()
{
  int a,b,c,d;
  int area,perim;
  float p,q;
  printf("Enter values of a,b:");
  scanf("%d %d",&a,&b);
  printf("Enter value of c,d:");
  scanf("%d %d",&c,&d);
  area=(c-a)*(d-b);
  perim=2*((c-a)+(d-b));
  printf("The area is :%d\nThe perimeter is:%d\n",area,perim);
  p=(float)(a+((float)(c-a)/2));
  q=(float)(b+((float)(d-b)/2));
  printf("The coordinates of point of intersection of diagonals :(%f,%f)",p,q);
  return 0 ;
}


  
    
    
