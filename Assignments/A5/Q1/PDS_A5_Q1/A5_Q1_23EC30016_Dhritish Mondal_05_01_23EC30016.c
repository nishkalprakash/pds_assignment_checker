#include<stdio.h>
int main()
{
  int i,j,count=0,t;
  int arr;
  printf("enter the number", i);
  scanf("%d",&n);
 for (i=0;i<n;i++){
 arr[i]=rand()%91+10;
   }
for (i=0;i<n-2;i=i+1){
  if(arr[i]>arr[i+2]){
    t = arr[i];
    arr[i]=arr[i+2];
    arr[1+2]=t;
    count++;
  }}
for (i=0;i<n;i++){
  printf("the  arr is %d", arr[1]);
    }
printf("the no. of interchanges made %d", count);
return 0;
}


  
