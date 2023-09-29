//Roll No.: 23MT10034
//Name: N Chandra Siddharth
//Set No.: 02

#include<stdio.h>
int main(){
  int n;
  int a[500];
  int max=0;
  int max2=0;
  int min=0;
  int min2=0;
  for(int i=0;i<=n;i++){
    printf("%d\n",a[i]);
  }
  if(a[i]>=max){
    max=a[i];
    printf("Largest number=%d\n",max);
  }
  if(a[i]<=min){
    min=a[i];
    printf("Smallest number=%d\n",min);
  }
  if(a[i]>=max2 && a[i]<max){
    max2=a[i];
    printf("Second largest number=%d\n",max2);
  }
  if(a[i]<=min2 && a[i]>min){
    min2=a[i];
    printf("Second smallest number=%d\n",min2);
  }
  if(a[i]<0){
    break;
  }
  return 0;
}

  
  
  
  
  
  