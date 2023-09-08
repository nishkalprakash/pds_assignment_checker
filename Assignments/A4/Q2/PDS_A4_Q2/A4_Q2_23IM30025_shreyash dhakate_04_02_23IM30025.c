//Roll no.: 23IM30025
//NAME : Shreyash Girdhari Dhakate
#include<stdio.h>
#include<stdlib.h>
int main(){
  int i,n,max=1;
  for(i=1;i<=20;i++){
    n=rand()%100;
    printf("%d\n",n);
    if (n>max){
      max=n;
    }
   
  }
  printf("Maximum number is:%d\n",max);
  return 0;
}
