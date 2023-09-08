//Name:Pramod kumar
//roll no:23PH10032
#include<stdio.h>
int main(){
  int n;
  int max=0;
  printf("enter rendom 20 number:");
  for(int i=1;i<=20;i++){
    scanf("%d",&n);
      if(max<n){max=n;}
    }
    printf("max is:%d",max);
  return 0;}
