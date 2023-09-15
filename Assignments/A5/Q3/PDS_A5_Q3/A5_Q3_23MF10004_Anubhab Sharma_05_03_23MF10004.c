#include<stdio.h>
int main()
{
  int i,n;
  int roll[10];
  float cg[10];
  
  printf("Enter the number of inputs to be taken: ");
  scanf("%d",&n);

  for (i=0; i<n+1; i++)
    scanf("%d", &roll[i]);
  for (i=0; i<n+1; i++)
    scanf("%f", &cg[i]);
  
}  
