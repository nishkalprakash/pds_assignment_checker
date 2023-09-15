#include <stdio.h>
#include <stdlib.h>

int main()
{
  int rollnum[20], age[20], marks[20], change1=0, change2=0, change3=0;  // Initiallising Variables and arrays
  for(int i=0; i<20; i++)
    {
      rollnum[i] = rand()%1000 + 1000;
      age[i] = rand()%10 + 15;
      marks[i] = rand()%101;
    }
  printf("Display with sorted age\n");     // Displaying with sorted age
  for(int i=0; i<20; i=i+1)    
      {
	for(int j=i+1; j<20; j++)           // Sorting the array
	  {
	    if(age[i] >  age[j]) 
	      {
		change1 = age[i];
		age[i] = age[j];
		age[j] = change1;
		change2 = rollnum[i];
		rollnum[i] = rollnum[j];
		rollnum[j] = change2;
		change3 = marks[i];
		marks[i] = marks[j];
		marks[j] = change3;
	      }
	  }
      }
  for(int i=0; i<20; i++)
    {
     printf("Roll: %d Age: %d Marks: %d\n",rollnum[i],age[i],marks[i]);
    }
  printf("Display with sorted marks\n");    // Printing sorted marks
  change1=0;change2=0;change3=0;
  for(int i=0; i<20; i=i+1)                  // Sorting the array
      {
	for(int j=i+1; j<20; j++)
	  {
	    if(marks[i] >  marks[j]) 
	      {
		change1 = age[i];
		age[i] = age[j];
		age[j] = change1;
		change2 = rollnum[i];
		rollnum[i] = rollnum[j];
		rollnum[j] = change2;
		change3 = marks[i];
		marks[i] = marks[j];
		marks[j] = change3;
	      }
	  }
      }
  for(int i=0; i<20; i++)
    {
      printf("Roll: %d Age: %d Marks: %d\n",rollnum[i],age[i],marks[i]);
    }
  printf("Display with sorted rollnumbers\n");
  change1=0;change2=0;change3=0; 
  for(int i=0; i<20; i=i+1)            // Sorting the array
      {
	for(int j=i+1; j<20; j++)
	  {
	    if(rollnum[i] >  rollnum[j]) 
	      {
		change1 = age[i];
		age[i] = age[j];
		age[j] = change1;
		change2 = rollnum[i];
		rollnum[i] = rollnum[j];
		rollnum[j] = change2;
		change3 = marks[i];
		marks[i] = marks[j];
		marks[j] = change3;
	      }
	  }
      }
  for(int i=0; i<20; i++)
    {
      printf("Roll: %d Age: %d Marks: %d\n",rollnum[i],age[i],marks[i]);
     }
  return 0;
}
