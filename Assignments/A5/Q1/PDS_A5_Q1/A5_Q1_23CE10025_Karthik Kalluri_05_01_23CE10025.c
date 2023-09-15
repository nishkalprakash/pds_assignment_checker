#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[50],n,x,count=0;
  printf("Enter the value of n\n");
  scanf("%d",&n);
  
  for(int i=0;i<n;i++)
    {
      a[i]=rand()%91+10;
    }
  
  for(int j=0;j<n;j++)
    {
      printf("%d, ",a[j]);
    }
  
  for(int i=0;i<n-2;i=i+2)
    {
      if(a[i]>a[i+2])
	{
	  x=a[i];
	  a[i]=a[i+2];
	  a[i+2]=x;
	  count++;
	}
    }

  printf("\n\n");
  
  for(int i=0;i<n;i++)
    {
    printf("%d, ",a[i]);
    }
  printf("\n");
  printf("The number of interchanges made are %d",count);
}
