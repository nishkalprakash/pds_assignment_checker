//ESLAVATH NAVEEN
//23MI31012
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int arr[50],i,y,a,high=50,low=10,x,z;
  a=rand()%(high-low+1)+low;
  printf("Enter the numbers: ");
  scanf("%d",&y);
  for(i=0;i<=y;i++)
    {
      a=rand();
      arr[i]=a;
      arr[i+x]=a;
      arr[i+z]=a;
      printf("%d",arr[i]);
      if(arr[i]+arr[i+x]+arr[i+z]==60)
	{
	  printf("%d %d %d\n",arr[i],arr[i+x],arr[i+z]);
	}
    }
  return 0;
}
      
  
