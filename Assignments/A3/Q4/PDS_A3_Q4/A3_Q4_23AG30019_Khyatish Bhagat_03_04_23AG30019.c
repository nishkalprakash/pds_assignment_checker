#include <stdio.h>

int main ()
{
  int a,b,c,d ;
  printf (" Enter the coordinates of bottom left corner\n ");
  scanf ( "%d%d", &a ,&b);
  printf (" Enter the coordinates of the top right corner\n");
  scanf( "%d%d",&c,&d);

  if ( c>=a && d>=b )
    {
      printf (" Rectangle is well formed\n ");
	}
  else
    {
      printf (" Ill formed rectangle");
      	}
  
  if ( c>=a && d>=b )
    {
  int p,q ;
  
    printf (" Enter the coordinates of any random point\n" );
    scanf ( "%d%d", &p,&q );

     if ( q==b && p<=c && p>=a)
      {
	printf (" The point lies on bottom side of rectangle ");
      }

    else if ( q==d && p<=c && p>=a)
    {
      printf ( " The point lies on top side of rectangle" );
    }

    else if ( p==c && q>=b && q<=d)
      {
	printf (" The point lies on right side of rectangle ");
      }
    
    else if ( p==a && q>=b && q<=d)
      {
	printf ( "The point lies on left side of rectangle ");
      }
    
    else if ( p>=a && p<=c && q>=b && q<=d )
      {
	printf ( "The point lies inside the rectangle ");
      }
    
    else if ( p<=a ||  p>=c || q<=b || q>=d )
      {
	printf ( " The point lies outside the rectangle ");
      }
    
    }
   

  return 0;
}

	
