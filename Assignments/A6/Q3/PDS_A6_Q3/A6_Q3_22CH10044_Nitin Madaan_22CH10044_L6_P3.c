#include<stdio.h>
#include<stdlib.h>

int main()
{
  int n;
  printf("enter value of n:-");
 scanf("%d",&n);
int A[n],B[n];
printf("Enter value of array A[]:-);
 for(int i=0;i<n;i++)
{
  scanf("%d",&A[i]);
}
printf("Enter value of array B[]:-);
for(int j=0;j<n;j++)
{
  scanf("%d",&B[j]);
}

return 0;
}

