#include<stdio.h>
int main()
{
  int marks ;
  printf ("enter the marks out of hundred \n");
  scanf ("%d",&marks);

  if( marks >=90 && marks <=100 )
      {
	printf(" grade of a student is EX");
      }
  else if (marks >=80 && marks <70)
      {
	printf (" grade of  a student is A");
      }
  else if (marks >=70 && marks <60)
      {
	printf (" grade of a student is B");
      }
  else if ( marks >=60 && marks <70)
       {
	printf (" grade of a student is C");
      }
  else if (marks >=50 && marks <60)
      {
	printf (" grade of a student is D");
      }
     else if (marks >=35 && marks<50 )
      {
	printf (" grade of a student is P");
      }
    
     else
       {
	 printf ( "grade of a student is F");
       }
    return 0;

}
