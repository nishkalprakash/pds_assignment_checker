#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
  int n,i,j,k,upper=50,lower=10;
  int A[50];
  printf("Enter the number of inputs in the array");
  scanf("%d",&n);
  // Taking random inputs in A
  for(i=0;i<n;i++)
       A[i]=rand()%(upper-lower+1)+lower ;
  // printing the array
  for(i=0;i<n;i++)
    printf("A[%d]=%d\n",i,A[i]);

  //finding the triplet

  for(i=0;i<n;i++)
{

  for(j=0;j<i;j++)
   {

     for(k=0;k<j;k++)
     {
       if( A[i] + A[j] + A[k] == 60)
	 { printf("A[%d] + A[%d] + A[%d]=60\n", i,j,k);
	   printf("A[%d] =%d\n A[%d]=%d\n A[%d]=%d\n", i,A[i],j,A[j],k,A[k]);}
       else
	 continue;
     }
  }
}
return 0;
}
