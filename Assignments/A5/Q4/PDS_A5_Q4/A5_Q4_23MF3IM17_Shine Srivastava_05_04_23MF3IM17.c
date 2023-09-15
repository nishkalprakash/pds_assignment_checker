//Roll no.: 23MF3IM17
//Name : Shine Srivastava

#include<stdio.h>
#include<stdlib.h>

int main()
{
  
  int age[20],roll[20],mark[20];
  for(int i=0;i<20;i++)
    {
      roll[i]=rand()%1000 + 1000;
      age[i]=rand()%10 + 15;
      mark[i]=rand()%100;
      printf("Roll no.: %d    Age: %d    Marks: %d",roll[i],age[i],mark[i]);
      printf("\n");
    }

  printf("Students with same age");
  printf("\n");
  for(int i=0;i<20;i++)
    {
      for(int k=0;k<=i;k++)
	{
	   if(age[i]==age[k])
	    {
	       printf("Roll no.: %d    Age: %d    Marks: %d\n",roll[i],age[i],mark[i]);
	      printf("Roll no.: %d    Age: %d    Marks: %d\n",roll[k],age[k],mark[k]);
	      printf(".......................................\n");
	    }
	}
    }


  
  printf("Students with same marks\n");
  for(int i=0;i<20;i++)
    {
      for(int k=0;k<i;k++)
	{
	   if(mark[i]==mark[k])
	    {
	      printf("Roll no.: %d    Age: %d    Marks: %d\n",roll[i],age[i],mark[i]);
	      printf("Roll no.: %d    Age: %d    Marks: %d\n",roll[k],age[k],mark[k]);
	      printf(".......................................\n");
	    }
	}
    }


  for(int 



  
 	      
}
  
      
      
