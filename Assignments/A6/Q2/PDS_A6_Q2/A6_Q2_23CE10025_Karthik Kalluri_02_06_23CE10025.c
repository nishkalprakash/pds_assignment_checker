#include <stdio.h>
#include <stdlib.h>
int arr[30];
int sum();
int max();
int reverse();
int main()
{
  
  for(int i=0;i<30;i++)
    {
      arr[i]=rand()%11+20;
    }
  for(int i=0;i<30;i++)
    {
      printf("%d  ",arr[i]);
    }
  printf("\n");
  sum();
  max();
  reverse();
  
}
int sum()
{int sum=0;
  int i=0;
  while(i<30)
    {
      sum=sum+arr[i];
      i++;
      
    }
  printf("\n sum is %d",sum);


  
  }
int max()
{
  int max=arr[0];
  for(int i=0;i<30;i++)
    {
      if(arr[i]>max)
	{
	  max=arr[i];
	}
    }
  printf("\n max is %d",max);
}
int reverse()
{
   int k;   
      for(int i=0,j=29;i<=15,j>=15;i++,j--)
	{
	  k=arr[i];
	  arr[i]=arr[j];
	  arr[j]=k;
	}
	
    }
  for(int i=0;i<30;i++)
    {
      printf("%d  ",arr[i]);
    }
}

