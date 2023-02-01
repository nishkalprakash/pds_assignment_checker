#include<stdio.h>
#include<math.h>
 int F(int n){
 
 if(n==0){
   return 0;
  }
  else if(n==1){
   return 1;
  }
  else{
    return (F(n-1) + F(n-2));
  }
   
 }
 int main()
 {
 
 int n,f;
 printf("enter the n:");
 scanf("%d",&n);

 for(int i=0;i<10;i++){
  
    if(F(i)==n){
      f=1;
      break;
    }
      else{
      f=0;
    }
 }
 
  if(f==1){
    printf("yes");
  }
  else{
   printf("no");
  }
 return 0;
 }
