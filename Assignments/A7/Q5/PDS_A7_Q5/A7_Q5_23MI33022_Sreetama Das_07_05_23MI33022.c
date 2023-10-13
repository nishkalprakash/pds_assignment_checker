#include <stdio.h>
#include <stdlib.h>
int main()
{
  int i, n, j, roll[20], age[20], marks[20], x, y, z, count=0, r, a, m, min_index, min, temp1, temp2, temp3;

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

  printf("Sorting the students according to their roll numbers ");
  for(i=0; i<19; i++)
    {
      min= roll[i];
    
      for(j= (i+1); j<=19; j++)
	{
	  
	  if(roll[j]<min)
	  {
	    min= roll[j];
	    min_index= j;
          }
        }
      temp1=  roll[i];
      roll[i]= roll[min_index];
      roll[min_index]=temp1;

       temp2=  age[i];
      age[i]= age[min_index];
      age[min_index]=temp2;

       temp3=  marks[i];
      marks[i]= marks[min_index];
      marks[min_index]=temp3;

      printf("Roll %d  Age %d  Mark %d\n ", temp1, temp2, temp3);
    }
  return 0;
}
