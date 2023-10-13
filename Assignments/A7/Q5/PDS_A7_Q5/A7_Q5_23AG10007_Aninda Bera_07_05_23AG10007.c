#include <stdio.h>
#include <stdlib.h>
int main()
{
  int roll[20],age[20],marks[20];
  for(int i=0;i<20;i++)
    {
      int q=rand()%1001+1000;
      roll[i]=q;
      int g=rand()%11+15;
      age[i]=g;
      int u=rand()%101;
      marks[i]=u;
    }
  printf("the details of students are:\n");
  for(int j=0;j<20;j++)
    {
      printf("Roll:%d Age:%d Marks:%d",roll[j],age[j],marks[j]);
      printf("\n");
    }
  printf("\n");
  int k=0,i=1;
  while(k<19)
    {
      for(int h=0;h<20;h++)
	{
	  if(k!=h)
	    {
	      if(marks[k]==marks[h])
		{
		  if(i=1)
		    {
		      printf("roll:%d age:%d marks:%d\n",roll[k],age[k],marks[k]);
		      printf("roll:%d age:%d marks:%d\n",roll[h],age[h],marks[h]);
		      i=0;
		    }
		  else
		    {
		      printf("roll:%d age:%d marks:%d\n",roll[h],age[h],marks[h]);
		      printf("\n");
		    }
		}
	    }
	}
      k++;
    }
  return 0;
}
	      
		  
		  
	  
