#include<stdio.h>
#include<math.h>

int power(int x, int n){
      int p;
      int i=1;
      while(i<=n){
      
      p=x*p;
      i++;}
      return p;}
      
   int fact(int n){
    int i,j=1;
    for(i=1;i<=n;i++){
    j=j*i;}
    return j;
      } 
  
  int main()
  {
    int sum,x,n;
    printf("enter value of x,n:");
    scanf("%d %d",&x,&n);
    
    for(int i=2;i < n+1;i++){
     sum=1;
     sum += power(x,i)/fact(i-1) ;
     
     }
  printf(" %d",sum);
  return 0;
  
  } 
  
