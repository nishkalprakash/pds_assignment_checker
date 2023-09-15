//23ME30001
//AARYA MAJALI

#include <stdio.h>
#include <stdlib.h>
int main()
{
  int rno[20],age[20],mks[20],i,k;
  for (i=0;i<20;i++)
    {
      rno[20]=(rand()%1000)+1000;
    }
  for (i=0;i<20;i++)
    {
      printf("the values stored in the array are %d\n",rno[20]);
    }
  for (i=0;i<20;i++)
    {
      age[20]=(rand()%10)+15;
    }
  for (i=0;i<20;i++)
    {
      printf("the values stored in the array are %d\n",age[20]);
    }
  for (i=0;i<20;i++)
    {
      mks[20]=(rand()%100)+0;
    }
  for (i=0;i<20;i++)
    {
      printf("the values stored in the array are %d\n",mks[20]);
    }
  for (i=0;i<20;i++)
    { 
      for (k=0;k<20;k++)
	{
	  if (rno[i]==rno[k])
	    {printf("the rollno of students with same age are %d%d\n",rno[i],rno[k]);
	      printf("the ages of students with same age are %d%d\n",age[i],age[k]);
	      printf("the marks of students with same age are %d%d\n",mks[i],mks[k]);
	    }
	  
  
  
      
  
  
