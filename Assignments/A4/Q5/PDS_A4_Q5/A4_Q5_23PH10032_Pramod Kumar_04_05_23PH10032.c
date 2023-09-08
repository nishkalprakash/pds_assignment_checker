//name:Pramod kumar
//Roll no:23PH10032
#include<stdio.h>
int main(){
  int n, sum=0,larg=-1,slar=-2,j;
  printf("enter numbers:");
  scanf("%d",&n);
  for(int i=0;i<=n;i++){
    sum=sum+n%10;
    n=n%10;
    j=n%10;
    if(larg<j){
      slar=larg;
      larg=j;
      }}
    printf("sum=%d larg=%d slar=%d",sum,larg,slar);
    return 0;
  }
