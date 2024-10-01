//NAME:Amartiya Kakodiya
//ROLL NO.:24NA10013
//PROGRAM TO FIND SUM OF GIVEN SERIES 
#include<stdio.h>
int power(int x, int n);
int fact(int n);

int main(){
     int n,pow,fac; 
     printf("enter n:");
     scanf("%d",&n);
     int x; 
     printf("enter x:");
     scanf("%d",&x);
     pow=power(x,n);
     fac=fact(n);
}

int power(int x, int n)
{
   for(int j=0; j<=n; j++){
      printf("power=%d",x*j);   
}
  } 
int fact(int n)
{  int fac;
   for(int i=1; i<=n; i++){
   fac=fac*i;
     
}
}
