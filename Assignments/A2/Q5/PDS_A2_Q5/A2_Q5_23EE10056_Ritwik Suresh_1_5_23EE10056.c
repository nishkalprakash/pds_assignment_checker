// Roll no.: 23EE10056 //
// Name : Ritwik Suresh //
#include<stdio.h>
int main()
{
  int a,b,c,d,l,br,area,perim ;
  float x,y ;
  printf("Enter the co-ordinates of the point (a,b) of the rectangle :\n");
  scanf("%d %d",&a,&b);
  printf("Enter the co-ordinates of the co-diagonal point (c,d) of (a,b) such that (c>a) and (d>b) :\n");//this ensures that (a,b) is the bottom-left point and (c,d) is the top right point) //
  scanf("%d %d",&c,&d);
  if((a>c) || (b>d))
  {
    printf("The co-ordinates are invalid.\n");
    return 1 ;
  }
  else
    {
      l = c-a ;
      br = d-b ;
      area = l*br ;
      perim = 2*(l+br);
      printf("The area of the given rectangle = %d\n",area);
      printf("The perimeter of the given rectangle = %d\n",perim);
      x =(float) (a+c)/2 ;
      y =(float) (b+d)/2 ;
      printf("The point of intersection of the diagonals = (%5.2f,%5.2f)\n",x,y);
      return 0 ;
    }
}
	   
      
      
  
