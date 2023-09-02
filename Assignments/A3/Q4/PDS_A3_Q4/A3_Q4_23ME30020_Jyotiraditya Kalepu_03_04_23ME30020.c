//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int a,b,c,d,x=0,y=0;     // Declaring variables to accpet co-ordinates 
  printf("Enter the co-ordinates of the bottom-left corner of the rectangle\n");
  scanf("%d %d",&a,&b);
  printf("Enter the co-ordinates of the top-right corner of the rectangle\n");
  scanf("%d %d",&c,&d);
  if (a>=c || b>=d){       // Checking for an ill formed rectangle
    printf("Ill formed rectangle\n");
  }
  else {
    printf("Enter the coordinates of point P\n");          
    scanf("%d %d",&x,&y);
    if( x>a && x<c){               // Checking if x co-ordinate of point P lies within a and c
      if ( y>b && y<d){
	printf("P = (%d,%d) lies inside the rectangle\n",x,y);                     
      }
      if (y == b)printf("P = (%d,%d) lies on bottom side the rectangle\n",x,y);
      if (y == d)printf("P = (%d,%d) lies on top side the rectangle\n",x,y);
    }
    if (y>b && y<d){              // Checking if y co-ordinate of point P lies within b and d
      if (x == a)printf("P = (%d,%d) lies on left side the rectangle\n",x,y);
      if (x == c)printf("P = (%d,%d) lies on right side the rectangle\n",x,y);
    }
    if (x==a && y==b)printf("P = (%d,%d) lies on the bottom-left corner the rectangle\n",x,y);
    if (x==a && y==d)printf("P = (%d,%d) lies on the top-left corner the rectangle\n",x,y);
    if (x==c && y==b)printf("P = (%d,%d) lies on the bottom-right corner the rectangle\n",x,y);
    if (x==c && y==d)printf("P = (%d,%d) lies on the top-right corner the rectangle\n",x,y);

    if (x<a||x>c||y<b||y>d){     // Checking if point P lies outside the rectangle
      printf("P = (%d,%d) lies outside the rectangle\n",x,y);
    }
  }
  return 0;
}
