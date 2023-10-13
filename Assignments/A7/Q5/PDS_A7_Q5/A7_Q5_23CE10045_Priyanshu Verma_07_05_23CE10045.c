//Roll No.:23CE10045
//Name:PRIYANSHU VERMA


#include <stdio.h>
#include <stdlib.h>

int main()
{
  int roll[20], age[20], marks[20], i, j, troll, tage, tmarks;
  for(i=0; i<20; i++)       // Generate random details of students
    {
      roll[i] = rand () % 1001 + 1000;
      age[i] = rand () % 11 + 15;
      marks[i] = rand () % 101;
      printf("Roll: %d  Age: %d  Marks: %d\n", roll[i], age[i], marks[i]);
    }

  printf("\nStudents having Identical Marks: \n\n ");  
  for(i=0; i<19; i++)      // Display details of students having identical marks
    {
      for(j=i+1; j<20; j++)
	{
	  if(marks[i] == marks[j])  
	    {
	       printf("Roll: %d  Age: %d  Marks: %d\n", roll[i], age[i], marks[i]);
	       printf("Roll: %d  Age: %d  Marks: %d\n", roll[j], age[j], marks[j]);
	    }
	}
    }

  for(i=0; i<19; i++)
    {
      for(j=i+1; j<20; j++)
	{
	  if(roll[j] < roll [i])  // sorting students according to roll no.
	    {
	      troll = roll[i];
	      roll[i] = roll[j];
	      roll[j] = troll;
	      
	      tage = age[i];
	      age[i] = age[j];
	      age[j] = tage;
	      
	      tmarks = marks[i];
	      marks[i] = marks[j];
	      marks[j] = tmarks;
	    }
	}
    }

  printf("\nSorted list of students according to Roll no.: \n\n");
  for(i=0; i<20; i++)
    {
       printf("Roll: %d  Age: %d  Marks: %d\n", roll[i], age[i], marks[i]);
    }
  return 0;
}
