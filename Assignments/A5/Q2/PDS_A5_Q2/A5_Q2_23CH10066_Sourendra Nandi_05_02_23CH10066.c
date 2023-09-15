//Name:Sourendra Nandi
//Roll No: 23CH10066
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[50],n,i,j,k,count=0,temp,sum;
  printf("Enter the number of random numbers (max 50): ");
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      a[i]=rand()%91+10;              //Creating the Array
    }
  printf("\nArray ={");
  for (i=0;i<n;i++)
    {
      printf("%d,",a[i]);            //Displaying created Array
    }
  printf("\b}\n");
  printf("Pairs :\n");
  for (i=0;i<n;i++)
    {
      for (j=i+1;j<n;j++)
	{
	  for(k=j+1;k<n;k++)
	    {
	      sum=a[i]+a[j]+a[k];
	      if (sum==60)          //Checking for sum=60
		{
		  count++;
		  printf("Triplet No. %d = (%d,%d,%d) , Corresponding indices = (%d,%d,%d)\n",count,a[i],a[j],a[k],i,j,k);
		}
	    }
	}
    }
  return 0;
}
