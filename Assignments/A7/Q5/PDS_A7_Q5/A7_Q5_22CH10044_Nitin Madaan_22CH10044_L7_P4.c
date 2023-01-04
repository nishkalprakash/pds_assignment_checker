#include<stdio.h>


int function(int*A,int n)
{
  int L=0;

for(int i=1;i<n;i++)
{

  for(int j=1;j<n-1 ;j++)
{
 
  if( (A[i]>A[i-1]) && (A[i]>A[j+1]))
{
   L++;
}
}
}

if(A[0]<A[1])
{
  L=L+1;
}

else if(A[n]>A[n-1]){
  L=L+1;
}

return L;
}


int main()
{
  int n;
 printf("Enter size of array between (1-10):-");
 scanf("%d",&n);
if(n>10)
{
  return 0;
}
  int A[n];
  for(int i=0;i<n;i++)
{
  printf("Enter the element of index %d = ",i);
  scanf("%d",&A[i]);
}

int p= function(A,n);
printf("Out of order: %d",p);

return 0;
}
 
 
