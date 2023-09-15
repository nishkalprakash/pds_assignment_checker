#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{ int i,j,temp,upper=100,lower=10,m ;
  int A[50];
  printf("Enter the random numbers to be generated ");
  scanf("%d",&m);
// taking m random numbers in the array
  for(i=0;i<m;i++)
     A[i]= rand()%(upper-lower+1)+lower;
    // printing the array
     for(i=0;i<m;i++)
 printf("A[%d]=%d\n",i,A[i]);
// interchanging the values acccording to the condition given
  for(i=0;i<m;i=i+2)
{  for(j=0;j<i;j=j+2)
  if (A[j]>A[i])
    { temp=A[i];
      A[i]=A[j];
      A[j]=temp;
  }
}
// printing the modified array
    for(i=0;i<m;i++)
       printf("A[%d]=%d\n",i,A[i]);
return 0;
}
