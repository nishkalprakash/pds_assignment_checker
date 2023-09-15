//ESLAVATH NAVEEN
//23MI31012
#include <stdlib.h>
#include <stdio.h>
int main()
{
  int a,i,low=10,high=100,arr[50],y;
  a=(rand()%(high-low+1))+low;
    printf("Enter the numbers: ");
    scanf("%d\n",&y);
    for(i=0;i<=y;i++)
      {
	a=rand();
	arr[i]=a;
	arr[i+2]=a;
	printf("%d",arr[i]);
	if((i%2==0)&&(arr[i]>arr[i+2])){
	  arr[i]=arr[i+2];
	  arr[i+2]=arr[i];
	  printf("%d\n",arr[i]);
	}
      }
    return 0;
}
	
    
  
  
