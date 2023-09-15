//Name : Sourendra Nandi
//Roll No: 23CH10066
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll[20],age[20],marks[20],i,j;
  for (i=0;i<20;i++)
    {
      roll[i]=rand()%1001+1000;          
      age[i]=rand()%11+15;            //(a) Creating the 3 1D Arrays
      marks[i]=rand()%101;
    }
  printf("Details:\n");
  for (i=0;i<20;i++)
    {
      printf("Student No: %d Roll: %d Age: %d Mark: %d\n",i+1,roll[i],age[i],marks[i]);       //(a) Displaying details of students
    }
  printf("\n\nDetails of Students with equal marks:\n");
  for (i=0;i<20;i++)
    {
      for (j=i+1;j<20;j++)
	{
	  if (marks[i]==marks[j])                //Checking for mark equality
	    {
	      printf("Roll: %d Age: %d Mark:%d \n",roll[i],age[i],marks[i]);         //(b) Printing details of student with equal marks
	      printf("Roll: %d Age: %d Mark:%d \n",roll[j],age[j],marks[j]);
	      printf("...........\n");
	    }
	}
    }
  printf("Sorted details :\n");
  for (i=1000;i<=2000;i++)
    {
      for (j=0;j<20;j++)
	{
	  if (roll[j]==i)
	    {
	      printf("Roll: %d Age: %d Mark: %d\n",roll[j],age[j],marks[j]);     //Printing sorted details
	    }
	}
    }
  return 0;
}
	  
