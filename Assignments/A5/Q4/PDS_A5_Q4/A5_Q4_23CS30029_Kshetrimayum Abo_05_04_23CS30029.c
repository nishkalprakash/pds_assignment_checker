//Roll No.: 23CS30029
//Name: Kshetrimayum Abo
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i, j, k, num, roll[20], age[20], mark[20], counter, repeat[20];
  
  
  for(i = 0; i < 20; i++)
    {
      num = rand()%1001+1000;
      roll[i]=num;
    }
  for(i = 0; i < 20; i++)
    {
      num = rand()%11+15;
      age[i]=num;
    }
  for(i = 0; i < 20; i++)
    {
      num = rand()%101;
      mark[i]=num;
    }

  for(i = 0; i < 20; i++)
    {
      printf("Roll: %d\t Age: %d\t Mark: %d\n",roll[i],age[i],mark[i]);
    }
  printf("\n");
    

  //for loop for printing repeated age
  for(i  = 0; i < 20; i++)
    {
      counter = 0;
	   
      for(j = i+1; j < 20; j++)
	{
	  if(age[i] == age[j])
	    {
	      printf("Roll: %d\t Age: %d\t Mark: %d\n",roll[j],age[j],mark[j]);
	      counter++;
		    
	    }
	  if((j == (19))&&(counter > 0))
	    {
	      printf("Roll: %d\t Age: %d\t Mark: %d\n",roll[i],age[i],mark[i]);
	    }	     
	}
      printf("\n");
    }

  //for loop for printing repeated mark
  for(i  = 0; i < 20; i++)
    {
      counter = 0;
	   
      for(j = i+1; j < 20; j++)
	{
	  if(mark[i] == mark[j])
	    {
	      printf("Roll: %d\t Age: %d\t Mark: %d\n",roll[j],age[j],mark[j]);
	      counter++;
		    
	    }
	  if((j == (19))&&(counter > 0))
	    {
	      printf("Roll: %d\t Age: %d\t Mark: %d\n",roll[i],age[i],mark[i]);
	    }	     
	}
      printf("\n");
    }

  

  return 0;
}
