#include <stdio.h>

int main ()

{
  int x,y;
  printf (" Enter the x coordinate\n");
  scanf( "%d",&x);
  printf (" Enter the  y coordinate\n");
  scanf ( "%d",&y);

  if( y==0 && x!=0)
    {
      printf ("point lies on x axis");
	}

  if ( x==0 && y!=0)
    {
      printf (" point lies on y axis ");
    }

  if ( x>=0 && y>=0)
    {
      printf (" The point lies in first quadrant ");
    }

  if ( x>=0 && y<=0)
{
  printf(" The point lies in fourth quadrant ");
 }

 if ( x<=0 && y>=0)
 {
   printf (" The point lies in second quadarant ");
 }

 if ( x<=0  && y<=0 )
   {
     printf ( " The point lies in third quadrant" );
}

  return 0;
  
}
