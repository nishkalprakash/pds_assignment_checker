//Roll no.:23CH10026
//Name:Disha Mukherjee

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int i,j,rn[20],age[20],marks[20],t=0;
  for(i=0;i<20;i++)
    {
      rn[i]=rand()%1000+1000;
      age[i]=rand()%15+10;
      marks[i]=rand()%100;
    }
  printf("\nFor identical age");
  for(i=0;i<19;i++)
    {
      for(j=i+1;j<20;j++)
	{
	  if(age[i]==age[j])
	    {
	      printf("Roll:%d\tAge:%d\tMark:%d\n",rn[i],age[i],marks[i]);
	      printf("Roll:%d\tAge:%d\tMark:%d\n",rn[j],age[j],marks[j]);
	    }
	}
    }
  printf("\nFor identical marks");
  for(i=0;i<19;i++)
    {
      for(j=i+1;j<20;j++)
	{
	  if(marks[i]==marks[j])
	    {
	      printf("Roll:%d\tAge:%d\tMark:%d\n",rn[i],age[i],marks[i]);
	      printf("Roll:%d\tAge:%d\tMark:%d\n",rn[j],age[j],marks[j]);
	    }
	}
    }
  for(i=0;i<20;i++)
    {
      for(j=i+1;j<19;j++)
	{
	  if(rn[j]<rn[j-1])
	    {
	      t=rn[j-1];
	      rn[j-1]=rn[j];
	      rn[j]=t;
	    }
	}
    }
  printf("\nsorted array");
  for(i=0;i<20;i++)
    printf("\nRoll:%d\tAge:%d\tMark:%d",rn[i],age[i],marks[i]);
  return 0;
}

    
  
