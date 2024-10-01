#include<stdio.h>

 int power(int x,int n);
 int fact(int n);
 

int power(int x,int n){
     for(int prod1=1,k=0;k<=n-1;k++){
      prod1*=x;
      return prod1;
      }
      }
      
 int fact(int n){
   for(int prod2=1,r=n;r>=1;r--){
     prod2*=r;
     return prod2;
     }
     }
     
 int main (){
  int x,n;
  scanf("%d",&x);
  scanf("%d",&n);
  float sum=1;
  float alpha=0;
  
  if(n<=0){
   return 1;
   }
  if(n==1){
   printf("%f",sum);
   }
  else{
  
  for(int k=0,b=1;k<n-1;k++){
  
    alpha+= (float)power(x,b)/fact(b);
     b++;
     }
     sum+=alpha;
     
    printf("%f",sum);
    }
 return 0;
 }
    
  
   
   
  
  
     
     
      
   

