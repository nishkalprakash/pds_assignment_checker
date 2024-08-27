#include<stdio.h>
int main() 
{
int n,i,j,k;
printf("Enter value of Rows\n");
scanf("%d", &n);
for(int i=1;i<=n;i++) {
for(int j=1;j<=n-i;j++) {
  printf(" ");
  }
  }
  for(int k=1;k<=(2*n-1);k++) {
  printf("_");
  }
  printf("\n");
  return 0;
  }
