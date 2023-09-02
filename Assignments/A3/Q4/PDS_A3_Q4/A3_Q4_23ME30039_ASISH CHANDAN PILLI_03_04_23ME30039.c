// name: pilli asish chandan
//roll no: 23ME30039

#include<stdio.h>
#include<math.h>

int main()   {
  int a,b;
  printf("enter a and b");
  scanf("%d%d", &a,&b);

  int c,d;
  printf("enter c and d");
  scanf("%d%d", &c,&d);

  if ( c>a && d>b )
    {
    int x,y;
    printf(" rectangle valid, enter values of x and y to know location of point with repsect to rectangle");
    scanf(" %d%d ", &x,&y);
    if( a<x && c>x && y>b && y<d )
      printf(" point is inside the rectangle");
    else if ( x==a && y>b && y<d)
      printf(" point is on left   side");
    else if( x==a && y==b )
      printf("point is on bottom left corner");
    else if ( x==c && y==d )
      printf(" point is on top right corner");
    else if (x==c && y==b )
      printf(" point is on bottom right corner");
    else if( x==a && y==d)
      printf(" point is on top left corner");
    else if( x==c && y>b && y<d)
      printf("point is on right side");
    else if( (y==b) &&( x>a) && (x<c) )
      printf(" point is on bottom side");
    else if( y==d && x>a && x<c)
      printf( " point is on top side");
    else
      printf( "point is outside the rectangle");
    printf("%d,%d ", x,y);
    }    else
      printf( " ILL RECTANGLE FORMED " );
}
    
     
      
