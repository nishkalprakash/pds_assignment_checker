//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int marks[20], roll[20],age[20];
  int x,y,z,t,flag=0;
  srand(time(NULL));
  for (int i=0;i<=20;i++)
    {
      x=rand()%101;
      y=rand()%1001+1000;
      z=rand()%11+15;
      marks[i]=x;
      roll[i]=y;
      age[i]=z;
    }
  printf("Students with same age:\n\n");
  for(int j=0;j<20;j++)
    {
      for(int i=j+1;i<20;i++)
    {
      if(age[i]==age[j])
	{
	  printf("Roll:%d Age:%d Mark:%d\n",roll[i],age[i],marks[i]);
	  flag=1;
	}
    }if (flag==1)
       {printf("Roll:%d Age:%d Mark:%d\n", roll[j],age[j],marks[j]);
	 printf("     ..................    \n");
	 
	 flag=0;
       }
    }
  printf("\n\nStudents with same marks:\n\n");
  for(int j=0;j<20;j++)
    {
      for(int i=0;i<20;i++)
	{
	  if(marks[i]==marks[j])
	    {
	      printf("Roll:%d Age:%d Mark:%d \n",roll[i],age[i],marks[i]);
	      flag=1;
	    }
	}
      if(flag==1)
	{
	  printf("Roll:%d Age:%d Mark:%d \n",roll[j],age[j],marks[j]);
	  printf("     ..............  \n");
	 
	  flag=0;
	    }
    }
      for (int i=0;i<20;i++)
	{
	  for(int j=0;j<(20-i);j++)
	    {
	      if(roll[j]>roll[j+1])
		{
		  t=roll[j+1];
		  roll[j+1]=roll[j];
		  roll[j]=t;
		}
	    }
	}
      printf("\n\nSort according to roll numbers:\n\n");
      for (int i=0;i<20;i++)
	{
	  printf("Roll:%d Age:%d Mark=%d \n", roll[i],age[i],marks[i]);
	  
	}
	  
    
    
  return 0;
}
      
