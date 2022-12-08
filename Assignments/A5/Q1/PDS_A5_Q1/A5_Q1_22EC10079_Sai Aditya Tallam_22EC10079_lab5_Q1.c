#include<stdio.h>
 

int power(int x,int n);
int fact(n);

int main(){
   int x,n;
   scanf("%d%d",&x,&n);
   power(x,n);
   }
 int fact(n){
     fact(n)=fact(n-1)*n;
     return fact(n);
       }
  int power(x,n){
      int i=1,sum=0;
     for(i=1;i<=n;i++){
        x=x*x;
     sum =sum+x/fact(n);
     return sum;
     }

