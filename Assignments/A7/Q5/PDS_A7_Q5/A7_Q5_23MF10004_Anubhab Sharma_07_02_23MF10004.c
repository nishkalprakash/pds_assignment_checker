#include <stdio.h>
#include<stdlib.h>

int main()
{
  int i,j,k,a,b,c,d,e,f,roll[20],age[20],marks[20];
  for (i=0;i<20;i++)
    {
      roll[i] = rand()%1001+1000;
    }
  for (j=0;j<20;j++)
    {
      age[j] = rand()%11+15;
    }
  for (k=0;k<20;k++)
    {
      marks[k] = rand()%101;
    }

  
  for(a=0;a<20;a++)
    {
      printf("for age: %d\n", age[a]);
      for(b=a+1;b<20;b++)
	{
	  if (age[a] == age[b])
	    {
	      printf("Roll: %d  Age: %d  Mark: %d\n", roll[a],age[a],marks[a]);
	    }
	}
    }
  printf("...................");
  printf("\n");
  printf("\n");


  for(c=0;c<20;c++)
    {
      printf("For Marks: %d\n", marks[c]);
      for(d=c+1;d<20;d++)
	{
	  if (marks[c] == marks[d])
	    {
	      printf("Roll: %d  Age: %d  Mark: %d\n", roll[c],age[c],marks[c]);
	    }
	}
    }
  printf("...................");
  printf("\n");
  printf("\n");
}
  
