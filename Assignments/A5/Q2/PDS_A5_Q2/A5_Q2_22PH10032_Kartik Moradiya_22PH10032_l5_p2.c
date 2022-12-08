#include<stdio.h>

  int gcd(int a, int b){
       int temp;
       while((b%a) != 0){
        temp=b%a;
        b=a;
        a= temp;
        }
        return a;
      }
  void Coprime(int a,int b){
     (gcd(a,b)==1)?printf("%d and %d are co prime \n",a,b): printf(" ") ;
     return;
     }
     
      int main(){ 
      
        int num[5];
        for(int i=0;i<5;i++){
        scanf("%d",&num[i]);
         }
        Coprime(num[0],num[1]);
       Coprime(num[0],num[2]);
       Coprime(num[0],num[3]);
       Coprime(num[0],num[4]);
       Coprime(num[2],num[1]);
       Coprime(num[3],num[1]);
       Coprime(num[4],num[1]);
       Coprime(num[2],num[3]);
       Coprime(num[2],num[4]);
       Coprime(num[3],num[4]);
     return 0;
     }
       
