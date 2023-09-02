#include <stdio.h>
int main ()
{
  int a;
  printf (" Enter marks of the student-\n ");
  scanf ( "%d",&a );

  if ( a>=90 )
    {
      printf ( " GRADE = EX " ) ;
    }
  
  if ( a>=80 && a<=90)
  {
    printf ( " GRADE = A ");
  }

  if ( a>= 70 && a <=80 )
    {
      printf ( " GRADE = B ");
    }

  if ( a>=60 && a <= 70 )
    {
      printf ( " GRADE = C " );
    }
  if ( a>=50 && a<=60 )
    {
      printf ( " GRADE = D " );
    }
  if ( a>=35 && a <= 50 ) 
  {
    printf ( " GRADE = P " ) ;
  }
  if (a<=35)
    {
      printf ( " GRADE = F " ) ;
    }

  return 0;
}
