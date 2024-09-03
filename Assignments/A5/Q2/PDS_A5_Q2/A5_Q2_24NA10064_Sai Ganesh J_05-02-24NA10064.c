#include <stdio.h>
int main()
{
  int i,j,n,k;
  int num[100];
  k=0;
  scanf("%d",&n);
  if(n>100){
    printf("Error: n>100");
    return 0;}
  for (i=0;i<n;i++){
      scanf("%d",&j);
      num[i] = j;
      }
 printf("Original Array: ");
      for(i=0;i<n;i++){
      printf("%d ",num[k]);
      k++;
      }
 printf("Duplicates:\n")
 
  return 0;
}
