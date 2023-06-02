#include<stdio.h>
/*NAME-Sumit Kumar
Roll nO.-22CS30056
Section-2
DEscription-FIbonacci numbers checking and printing nearby*/
long long int fibcheck(long long int n){
   long long int a,b;
   if (n==0) return 1;
   if(n==1) return 1;
   a=0;b=1;
   int found=0;
   do{
      if(n==b){
        found++;
        break;
      }
      if(n>a&& n<b){
            long long int e,f;
            e=n-a;
            f=b-n;
            if(e>f) return b;
            else return a;

      }
      long long int c=b;
      b=a+b;
      a=c;

   }while(found!=1);
   if(found==1) return 1;
}
int main(){
   long long int n;
   printf("Value of n:");
   scanf("%lld",&n);
   if(n<0) printf("\nPlease give positive number.");
   else{
        long long int k=fibcheck(n);
        if(k==1) printf("\n%lld is aFibonacci number",n);
        else  printf("\nNearest Fibonacci number:%lld",k);


   }
}
