#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int arr[50],size,flag=0;
  printf(" enter size");
  scanf("%d",&size);
 
  for( int i=0;i<size;i++)
    {
      arr[i]=rand()%41+10;
    }
  printf(" so the random numbers are as follows\n");
  for( int i=0;i<size;i++){
    printf("%d ", arr[i]);
}
  for(int i=0;i<size;i++){
    for(int j=i+1;j<size;j++){
      for(int k=j+1;k<size;k++)
	if(arr[i]+arr[j]+arr[k]==60)
	  { flag=1;
	      printf("\n triplets are %d  %d  %d  \n",arr[i],arr[j],arr[k]);
      }
      
  }
  }

  if (flag==0)
    printf("no triplet found");
  return 0;
}
