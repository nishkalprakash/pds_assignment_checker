#include<stdio.h>
#define N 100
 int main(){
    int a[N],n,i,temp,len=0,count=0,j;
  printf("Enter the limit (<N)");
  scanf("%d",&n);
  printf ("Enter the %d number:\n",n);
  for(i=0;i<n;i++){
    scanf(" %d",&a[i]);}
    printf("Original array:");
    for(i=0;i<n;i++){
    printf("%d ",a[i]);}
    for(i=0;i<n;i++){
    if(a[i]<0) count++;
    if(len>=1){
    if (a[i]<0){for(j=len;j>=count;j--){
        temp=a[j-1];
        a[j-1]=a[j];
        a[j]=temp;
    }}
  }len++;
  }  printf("\n");
  printf("Rearranged array:");
  for(i=0;i<n;i++){
   printf("%d ",a[i]);}
  return 0;
 }

