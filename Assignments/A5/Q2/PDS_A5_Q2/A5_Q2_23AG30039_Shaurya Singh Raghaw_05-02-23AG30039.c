#include<stdio.h>
#include<stdlib.h>
int main()
{
  int n;
  printf("enter the number: ");
  scanf("%d",&n);
  if(n>50)
    printf("wrong input");
  int arr[n];
  for(int i=0;i<n;i++)
    {
      arr[i]=rand()%41+10;
      printf("%d\n",arr[i]);

      for(int j=i+1;j<n;j++)
	{
	  for(int k=j+1;k<n;k++)
	    {
	      if(arr[i]+arr[j]+arr[k]==60)
		{
		  printf("%d,%d and %d add upto 60\n",arr[i],arr[j],arr[k]);
		  printf("array indices are: %d,%d and %d\n",i,j,k);
		}
	    }
	}
    }

  return 0;
}
