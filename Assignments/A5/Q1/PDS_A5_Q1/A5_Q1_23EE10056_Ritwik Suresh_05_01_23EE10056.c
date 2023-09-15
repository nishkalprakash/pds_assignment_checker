//23EE10056
//Ritwik Suresh
#include<stdio.h>
#include<stdlib.h>
int main()
{
  int a[50],n,temp=0,count=0,i;
  printf("Enter the no. of elements in the array:\n");
  scanf("%d",&n);
  if(n>50){
    printf("Invalid value of n\n");
    return 0;
  }
  for(i=0;i<n;i++)
    {
      temp= rand()%91 ;
      a[i] = temp + 10;
    }
  printf("The elements of the array are:\n");
  for(i=0;i<n;i++)
    {
      printf("%d ",a[i]);
    }
  printf("\n");
  for(i=0;i<n-1;i+=2)
    {
      if(a[i]>a[i+2])
	{
	  temp = a[i];
	  a[i] = a[i+2];
	  a[i+2] = temp;
	  count++ ;
	}
    }
  printf("The new array after the interchanges is : \n");
  for(i=0;i<n;i++)
    printf("%d ",a[i]);
  printf("\n");
  printf("\n The no. of interchanges made is %d",count);
  return 0;
}
  
  
