// Name - Adarsh Kumar Singh
// Roll No. 23CE10005

#include <stdio.h>

int main()
{
  int n;
  for (int i=1; i > 0; i++)
    {
      printf("\n\nEnter the no. of students (maximum 10)  you want to to store CGPA of: ");
      scanf("%d", &n);
      if (i > 0 && i <= 10)
	{
	  break;
	}
      else
	{
	  printf("Invalid input. Please give the input again.");
	}
    }
  int roll[10];
  float cgpa[10], avg=0;
  
  printf("\nEnter the Roll no. and CGPA (give space between inputs) of\n");
  for (int i=0; i < n; i++)
    {
      printf("Student %d: ", i+1);
      scanf("%d%f", &roll[i], &cgpa[i]);
    }
  printf("\nSL No.\tRoll No.\tCGPA\n\n");
  for (int i=0; i < n; i++)
    {
      printf(" %-5d\t%-7d        %f\n", i+1, roll[i], cgpa[i]);
      avg = avg + cgpa[i];
    }
  avg = avg/n;
  printf("The average CGPA is %f", avg);
  
  for (int i=0; i < n; i++)
    {
      cgpa[i] = (int)(cgpa[i]*100);
      cgpa[i] = (float)(cgpa[i]/100);
    }
  int a=0;
  for (int i=0; i < n; i++)
    {
      for (int j=i; i < n; j++)
	{
          if (cgpa[i] == cgpa[j])
	    {
              a++;
	      printf("%d and ", roll[j]);
	    }
	}
      if (a > 0)
	    {
              printf("%d are the following Roll Number(s) of the students having same cgpa equal to %.2f", roll[i], cgpa[i]);
	    }
    }
  return 0;
}

    
