//Ritwik Suresh
// 23EE10056
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int  roll[20],age[20],marks[20],test[20],test2[20],i,temp,k=0,flag,count;
  int r2[20],a2[20],m2[20],min,j;
  for(i=0;i<20;i++)
    {
      roll[i]=0;
    }
  for(i=0;i<20;i++)
    {
      flag =0;
      temp = rand()%1001 +1000 ;
      for(k=0;k<20;k++)
	{
	  if(temp == roll[k])
	    {
	      flag = 1;
	      break;
	    }
	}
      if(flag==1)
	continue;
      roll[i]= temp;
    }
  for(i=0;i<20;i++)
    {
      temp = rand()%16+10;
      age[i]= temp;
      test2[i]=temp;
    }
  for(i=0;i<20;i++)
    {
      temp = rand()%100 ;
      marks[i]= temp;
      test[i] = temp;
    }
  printf("//////////////////////\n");
  printf("The students of the same age are:\n");
  for(i=0;i<20;i++)
    {
      count=0;
      for(j=i+1;j<20;j++)
	{
	  if(test2[i]==test2[j])
	    {
	      printf("Roll:%d  Age:%d  Marks:%d\n",roll[j],age[j],marks[j]);
	      test2[j] = -j; //so that it does not print multiple times//
	      count++;k++;
	    }
	 
	}
       if(count>0)
	    {
	     printf("Roll:%d  Age:%d  Marks:%d\n",roll[i],age[i],marks[i]);
	     printf(".... .... ....\n");
	    }
    }
  
  if(k==0)
    printf("No students have the same age\n");
  k=0;
   printf("//////////////////////\n");
  printf("The students with the same marks are:\n");
  for(i=0;i<20;i++)
    {
      count=0;
      for(j=i+1;j<20;j++)
	{
	  if(test[i]==test[j])
	    {
	      printf("Roll:%d  Age:%d  Marks:%d\n",roll[j],age[j],marks[j]);
	      test[j] = -j; //so that it does not print multiple times//
	      count++;k++;
	    }
	 
	}
       if(count>0)
	    {
	     printf("Roll:%d  Age:%d  Marks:%d\n",roll[i],age[i],marks[i]);
	     printf(".... .... ....\n");
	    }
    }
  
  if(k==0)
    printf("No students have the same marks\n");
  i=0;
  while(i<20)
    {
      min = 5000;
      for(k=0;k<20;k++)
	{
	  if(roll[k]<min)
	    {
	    min = roll[k];
	    j = k;
	    }
	}
      r2[i] = min; a2[i]=age[j];m2[i] = marks[j];
      roll[j] = 3000;
      i++;
    }
   printf("//////////////////////\n");
  printf("The details of the students in sorted form is:\n");
  for(i=0;i<20;i++)
    printf("Roll:%d  Age:%d  Marks:%d\n",r2[i],a2[i],m2[i]);
  printf("//////////////////////\n");
  return 0;
}
      
      
  
  
	  
	      
	    
  
      
      
