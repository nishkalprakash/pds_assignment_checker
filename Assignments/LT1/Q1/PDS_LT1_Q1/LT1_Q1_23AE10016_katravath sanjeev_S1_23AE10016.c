#include<stdio.h>
int main()
{
  int i,j,n;
  printf("enter the value of n:");
  scanf("%d",&n);
  for(i=1;i<=9;i++){
    for(j=1;j<=i;j++){
      printf("\n%d",i);
    }
  }
  return 0;
}
