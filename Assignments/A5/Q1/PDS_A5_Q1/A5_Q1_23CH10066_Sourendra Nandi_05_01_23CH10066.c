//Name:Sourendra Nandi
//Roll No: 23CH10066
#include <stdio.h>
#include <stdlib.h>
int main()
{
  int a[50],n,i,count=0,temp;
  printf("Enter the number of random numbers (max 50): ");    //getting no. of numbers
  scanf("%d",&n);
  for (i=0;i<n;i++)
    {
      a[i]=rand()%91+10;
    }
  printf("\nArray ={");
  for (i=0;i<n;i++)
    {
      printf("%d,",a[i]);
    }
  printf("\b}\n");
  for (i=0;i<n-2;i++)
    {
      if (a[i]>a[i+2])
	{
	  count++;
	  temp=a[i];
	  a[i]=a[i+2];
	  a[i+2]=temp;
	}
    }
  printf("\nModified Array ={");
  for (i=0;i<n;i++)
    {
      printf("%d,",a[i]);
    }
  printf("\b}\n");
  printf("No. of Interchanges made = %d\n",count);
  return 0;
  
	  
}
