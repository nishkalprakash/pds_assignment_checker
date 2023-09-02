#include<stdio.h>
int main ()
{
  int a,b ;
  printf(" enter the co-ordinates\n");
  scanf ("%d %d", &a,&b );
  if ( a==0 ||b==0 )
    {
      printf (" co-ordinates lie on either x-axis or y-axis");
	}
  else if ( a>0 && b>0 )
    {
      printf (" co-ordinates lie on 1st quadrant ");
	}
  else if ( a<0 && b>0)
    {
      printf (" co-ordinates lie on 2nd quadrant");
	}
  else if (a<0 && b<0 )
    {
      printf (" co-ordinates lie on 3rd quadrant ");
	}
  else
    {
      printf ("co-ordinates lie on 4th quadrant");
	}
  return 0;
    }
    











  

    
