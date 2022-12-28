#include<stdio.h>
#include<math.h>

   int gcd(int m,int n);
   void Coprime(int a,int b);
   int main()
   {
    int arr[5];
    for(int i=0;i<5;i++){
    scanf("%d",&arr[i]);
    }
    
     for(int i=0;i<5;i++){
      for(int j=i+1;j<5;j++){
      Coprime(arr[i],arr[j]);
      }
     }
   
   return 0;
   }
   
   int gcd(int m, int n){
     for(int i=1;i<=n;i++){
       if(m%i==0 && n%i==0){
        return i;
      }
      else {
      return -1;
      }
    }
    }
   
   void Coprime(int a, int b){
     if(gcd(a,b)==1){
      printf("(%d,%d)",a,b);
     } 
