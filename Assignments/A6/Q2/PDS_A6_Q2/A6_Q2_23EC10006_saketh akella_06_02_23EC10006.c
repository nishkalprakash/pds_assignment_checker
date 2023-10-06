#include<stdio.h>
#include<stdlib.h>
int a[30];int x=0;int i=0;int sum1=0;

int sum(int n,int j){
  if(n==j+1)return a[j];
  else return a[j]+sum(n,j+1);
   
}
int max(int n,int j){
  int max=0;
  for(int i=0;i<n;i++){
  if(max<a[i])max=a[i];
  }
  return max;
}

int main(){
  int b;int sumation;int maximum;
  printf("enter the n \n");
  scanf("%d",&b);
  for(int i=0;i<30;i++){
    x=rand()%11;
    x=x+20;
    a[i]=x;
  }
  for(int i=0;i<30;i++){
  printf("%d ",a[i]);
  }
  printf("\n");
  sumation=sum(b,0);
  printf("%d \n",sumation);
  maximum=max(b,0);
  printf("%d \n",maximum);
  
  printf("\n");
  return 0;
}
