#include<stdio.h>
int main(){
  int n,n1,new=0,m;
  printf("Vedaant nigam\n 23AG10047\n");
  printf("enter the number less than 9999\n");
  scanf("%d",&n);
  n1=n;
  while(n1>0){
    m=n1%10;
    new=new*10 +(m+1);
    n1=n1/10;

  }
  m=0;
  int rev=0;
  while(new>0){
    m=new%10;
    rev=rev*10 +m;
    new=new/10;
  }
  printf("input= %d encoded=%d\n",n,rev);
  int sum=0,newrev;
  m=0;
  newrev=rev;
  while(newrev>0){
    m=newrev%10;
    sum=sum+m;
    newrev=newrev/10;
  }
  rev=rev*100 + sum;
  printf("with checksum=%d\n",rev);
  int rev1=0;
  m=0;
  while(rev>0){
    m=rev%10;
    rev1=rev1*100 + m;
    rev=rev/10;
  }
  int rev2=0;
  m=0;
  while(rev1>0){
    m=rev1%10;
    rev2=rev2*10 + m;
    rev1=rev1/10;
  }
  printf("double checksum=%d",rev2*10);
  return 0;
}
