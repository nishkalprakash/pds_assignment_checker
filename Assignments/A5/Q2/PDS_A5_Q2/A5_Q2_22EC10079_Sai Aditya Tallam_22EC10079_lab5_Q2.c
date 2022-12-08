#include<stdio.h>               //header file

 int gcd(int x,int y){
    int p;
    while((y%x)!=0){
    p=y%x;
    y=x;
    x=p;
     }
    return x;
    }
   void coprime(int x,int y){
            (gcd(x,y)==1)?printf("%d and %d are co prime \n",x,y):printf("  ");     //checking whether gcd 1 or not 
             return;
                       }
   int main()
      {
      
     int n[5];
     for(int j=0;j<5;j++){
     scanf("%d",&n[j]);                 // inputting user to give 5 values
      }
     coprime (n[0],n[1]);
     coprime (n[0],n[2]);
     coprime (n[0],n[3]);
     coprime (n[0],n[4]);
     coprime (n[2],n[1]);
     coprime (n[3],n[1]);
     coprime (n[4],n[1]);
     coprime (n[2],n[3]);
     coprime (n[2],n[4]);
     coprime (n[3],n[4]);
   
       return 0;
   }
