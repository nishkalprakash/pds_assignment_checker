//name : ramaraju sai pranav murari
//roll no: 23EC10066
#include<stdio.h>
#include<stdlib.h>
int main(){
  int n,i,count=0,t;
  int arr[50];
  printf("enter the value of n : ");
  scanf("%d",&n);
  for(i=0;i<n;i++){
     arr [i]= rand()%91 +10;
  }
  for(i=0;i<n-2;i+=2){
    if(arr[i]>arr[i+2]){
      t = arr[i];
      arr[i]=arr[i+2];
      arr[i+2]=t;
      count++;
    }
  }
  for(i=0;i<n;i++){
    printf("the elements are : %d\n",arr[i]);
  }
  printf("the number of interchanges made =%d",count);
  return 0;
}
