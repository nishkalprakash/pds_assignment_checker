//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n, i, j;
  unsigned int roll[10];
  float cg[10], cgsum=0, x, y;

  printf("Enter no students: \n");
  scanf("%d", &n);

  for(i=0; i<n; i++)   // TAKING DETAIL OF STUDENTS FROM USER
    {
      printf("Enter Roll no. of student no %d:\n",i+1);
	scanf("%d",&roll[i]);
	printf("Enter CGPA of student no %d:\n",i+1);
	scanf("%f",&cg[i]);
	cgsum += cg[i];
    }

  printf("\n");
  for(i=0; i<n; i++)    // DISPLAYING DETAILS
    {
      printf("Roll No: %d  CGPA = %f\n ", roll[i], cg[i]);  
    }
  printf("\nAverage CGPA of students = %f\n\n", cgsum/n);

  printf("Students having identical CGPA (two digit accuracy): \n\n");

  for(i=0; i<n-1 ; i++)
    {
      for(j = i+1; j<n ; j++)   // CHECKING STUDENTS HAVING IDENTICAL CG (two digit accuracy) 
	{
	  x = (int)(cg[i]*100);
	  y = (int)(cg[j]*100);
	  if( x == y )
	    {
	      printf("Roll No: %d  CGPA = %f\n ", roll[i], cg[i]);
	      printf("Roll No: %d  CGPA = %f\n ", roll[j], cg[j]);
	    }
	}
    }

  return 0;
}
