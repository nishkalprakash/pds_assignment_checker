// Roll Number:23ME10063
// Name:Prem Pastagia

#include <stdio.h>
int main()
{
  int a,b,c,d,x,y;
  printf("Enter the bottom left coordinates of the rectangle:\n");
  scanf("%d%d",&a,&b);
  printf("Enter the top right coordinates of the rectangle:\n");
  scanf("%d%d",&c,&d);

  if ((c>a)&&(d>b))
    {
      printf("Please enter the coordinates of a point P:\n");
      scanf("%d%d",&x,&y);
      if  ( ((x>a)&&(x<c)) && ((y>b)&&(y<d)))
	printf("The point P lies inside the rectangle\n");
      else if  ( (x==a) && ((y>b)&&(y<d)) )
	printf("The point P lies on the bottom side of the rectangle\n");
      else if  ( (x==c) && ((y>b)&&(y<d)) )
	printf("The point P lies on the top side of the rectangle\n");
      else if  ( (y==b) && ((x>a)&&(x<c)) )
	printf("The point P lies on the left side of the rectangle\n");
      else if  ( (y==d) && ((x>a)&&(x<c)) )
	printf("The point P lies on the right side of the rectangle\n");
      else if ( (y==d) && (x==c) )
	printf("The point lies on the top right corner of the rectangle");
       else if ( (y==d) && (x==a) )
	printf("The point lies on the bottom right corner of the rectangle");
       else if ( (y==b) && (x==c) )
	printf("The point lies on the top left corner of the rectangle");
       else if ( (y==b) && (x==a) )
	printf("The point lies on the bottom  left corner of the rectangle");
       else  if  ( ((x<a)||(x>c)) || ((y<b)||(y>d)))
	printf("The point P lies outside the rectangle\n");
    }
  else printf("No Rectangle is formed");
  return 0;
}
