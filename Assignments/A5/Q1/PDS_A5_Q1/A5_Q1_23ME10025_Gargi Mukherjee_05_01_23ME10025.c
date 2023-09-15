//Roll no.:23ME10025
//Name:Gargi Mukherjee
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
  int a[50],n,h,k;
  int c=0;
  printf("Enter the numbers of number to be generated:\n");
  scanf("%d",&n);
  srand(time(NULL));
  for(int i=0;i<n;i++)
    {
      h=rand()%91+10;
      a[i]=h;
    }
  printf("The array contents:\n");
  for (int i=0;i<n;i++)
    {
      printf("index=%d value=%d\n",i,a[i]);
    }
  for(int i=0;i<n-2;i=i+2)
    {
      if (a[i]>a[i+2])
	{
	  k=a[i];
	  a[i]=a[i+2];
	  a[i+2]=k;
	  c++;
	}
    }
  printf("The array after interchange:\n");
  for(int i=0;i<n;i++)
    {
      printf("index=%d value=%d \n",i,a[i]);
    }
  printf("No of interchanges:%d",c);
  return 0;
}
      
  
      
