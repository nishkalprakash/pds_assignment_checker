#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a,i,b,count=0;
  int arr[50];
  printf("Enter the number of random numbers to be generated: ");
  scanf("%d", &a);
  for (i=0; i<a+1; i++)
    arr[i]=rand()%100;
  for (i=0; i<a+1; i++)
    printf("arr[%d] = %d\n", i,arr[i]);
  for (i=0; i<a+1; i++)
    {
      if (arr[i] > arr[i+2])
	{
	  b = arr[i];
          arr[i] = arr[i+2];
          arr[i+2] = b;
	  printf("The interchanged array is: %d\n", arr[i]); 
	}
      count = count+1;
    }
  
 
  printf("The number of interchanges is: %d\n", count);
  
 
      
      
  





  return 0;

}
  
  
  
  
  
