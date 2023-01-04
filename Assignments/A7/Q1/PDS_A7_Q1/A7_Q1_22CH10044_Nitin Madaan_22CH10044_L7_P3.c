#include<stdio.h>


void bubblesort(int*A,int n)
{

for(int i=0;i<n;i++)
{
  for(int j=0;j<n-i;j++)
{
  if(A[j]>A[j+1])
{
  int temp=A[j];
   A[j]=A[j+1];
  A[j+1]=temp;
}

}
}
  return;
}







int main()
{
  int n,m;
  printf("Enter value of n:-");
  scanf("%d",&n);
 int A[n+1];
for(int i=0;i<n;i++)
{
  printf("Enter the element of index %d :-",i);
  scanf("%d",&A[i]);
}
 
printf("Enter the value which you want to add in array :-\n");
 scanf("%d",&m);
A[n]= m;

bubblesort(A,n+1);


for(int i=0;i<n+1;i++)
{
  printf("%d ",A[i]);
}

return 0;
}

