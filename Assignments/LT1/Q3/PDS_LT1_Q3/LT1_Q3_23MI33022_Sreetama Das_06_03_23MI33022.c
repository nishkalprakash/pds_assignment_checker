//Roll no: 23MI33022
//Name: Sreetama Das

#include <stdio.h>
int main()
{
  int i,n=1, arr[n], max=0, min=0, smax=0, smin=0;
   printf("Enter numbers: ");
    scanf("%d", &arr[n]);
    for(i=0; i<=n;i++)
    {
       if(arr[n]<0)
    {
      break;
    }
       if(max<arr[n])// finding largest number
    {
      max=arr[n];
       printf("Largest number: %d", max);
    }
       if(smax<arr[n] && smax!=max)// finding second largest number
    {
      if(i=1)
	{
	  printf("Value not entered");
	}
      else
    {
      smax=arr[n];
 printf("Second Largest number: %d",smax);
    }
    }
  if(min>arr[n]) // finding smallest number
    {
      min=arr[n];
       printf("Smallest number: %d", min);
    }
  if(smin>arr[n] && smin!=min) // finding second smallest number
    {
      smin=arr[n];
       printf("Second smallest number: %d",smin);
    }
    }
    n++;
  return 0;
}
