#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, n, j, roll[20], age[20], marks[20], x, y, z, count=0, r, a, m;

  for(i=0; i<20; i++) 
    {
      x= (rand()%2001)+1000; //taking numbers between 1000 to 2000
      roll[i]=x;
      y= (rand()%11)+15;
      age[i]= y;
      z= (rand()%101)+0;
      marks[i]= z;
    }
  printf("Displaying roll number, age and marks of students having same age\n " );
  for(y=15; y<=25;y++)
    {
      count=0;
      for(i=0; i<20; i++)
	{
	  if(age[i]== y)
	    {
	      count++;
	      if(count==1)
		{
		  r=roll[i];
		  a=age[i];
		  m=marks[i];
		}
	      else  if(count==2)
		{
	     printf("Roll %d  Age %d  Mark %d\n ", r, a, m);
	     
	    printf("Roll %d  Age %d  Mark %d\n ", roll[i], age[i], marks[i]);
		}
	      else if(count>2)
		{
		   printf("Roll %d  Age %d  Mark %d\n ", roll[i], age[i], marks[i]);
		}
		
	    }
	}
    }

   printf("Displaying roll number, age and marks of students having same marks\n " );
  for(z=0; z<=100;z++)
    {
      count=0;
      for(i=0; i<20; i++)
	{
	  if(marks[i]== z)
	    {
	      count++;
	      if(count==1)
		{
		  r=roll[i];
		  a=age[i];
		  m=marks[i];
		}
	      else  if(count==2)
		{
	     printf("Roll %d  Age %d  Mark %d\n ", r, a, m);
	     
	    printf("Roll %d  Age %d  Mark %d\n ", roll[i], age[i], marks[i]);
		}
	      else if(count>2)
		{
		   printf("Roll %d  Age %d  Mark %d\n ", roll[i], age[i], marks[i]);
		}
	    }
		
	    }
	}
  
  return 0;
}
