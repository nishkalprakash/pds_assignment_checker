#include<stdio.h>
int main()
{
  int n;
  printf("Enter value of n:-");
  scanf("%d",&n);
  int A[n],B[n];
 printf("Enter value of array A[]:-\n");

  for(int i=0;i<n;i++)
{
  scanf("%d",&A[i]);
}
 printf("Enter value of array B[]\n");
 for(int j=0;j<n;j++)
{
  scanf("%d",&B[j]);
}
  
printf("Difference =");
 
// for(int i=0;i<n;i++)
// {
//   for(int j=0;j<n;j++)
// {
//   if(A[i]!=B[j])
// {
//   printf("%d",A[i]);
// }
// }
// }

return 0;
}
