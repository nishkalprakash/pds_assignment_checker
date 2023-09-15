#include <stdio.h>
#include <stdlib.h>
int main(){
  int a[50],n;
  printf("23AG10047\n");
  printf("Vedaant Nigam\n");
  printf("enter number of elements\n");
  scanf("%d",&n);
  int i,b;
  for(i=0;i<=n-1;){b=rand()%100;
    if(b>=10){a[i]=b;i++;}}
  for(i=0;i<=n-1;i++){printf("%d ",a[i]);}
  int temp;
  for(i=0;i<=n-3;i=i+2){if(a[i]>a[i+2]){temp=a[i];a[i]=a[i+2];a[i+2]=temp;}
    else continue;}
  printf("\n");
  for(i=0;i<=n-1;i++){printf("%d ",a[i]);}
  return 0;
}
