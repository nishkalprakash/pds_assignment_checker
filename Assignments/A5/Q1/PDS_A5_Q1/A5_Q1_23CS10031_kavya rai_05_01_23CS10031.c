#include<stdio.h>
#include<stdlib.h>
int main()
{
  int arr[50];
  int i,n,count=0,temp;
  printf("Enter the no. of random numbers to be generated:");
  scanf("%d",&n);
  if(n<=50)
    {
      for(i=0;i<n;i++)
	{
	  arr[i]=rand()%90+10;
	}
      for(i=0;i<n;i++)
	{
	  printf("%d\n",arr[i]);
	}
      for(i=2;i<n;i+=2)
	{
	  if(arr[i-2]>arr[i])
	    { 
	      temp=arr[i];
	      arr[i]=arr[i-2];
              arr[i-2]=temp;
	      count++;
	    }
	}
      printf("changed array:\n");
      for(i=0;i<n;i++)
	{
	  printf("%d\n",arr[i]);
	}
      printf("\nNo. of interchanges made : %d",count);
    }
    return 0;
}
