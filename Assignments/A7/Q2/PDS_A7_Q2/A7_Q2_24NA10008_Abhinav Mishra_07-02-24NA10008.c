#include <stdio.h>
int gcd(int a,int b){  // GENERATING GCD FUNCTION
int temp;
if(a>b){
temp =a;
b=a;
b=temp;}
else {
while(a!=b&& a!=0){   
  temp=a;   
  a = b%a;
  b = temp;
  }
  return b;  // returning gcd
  }
 }
 void coprime(int a,int b){  // CHECKING COPRIME PAIRS FROM GIVEN NUMBERS BY CREATING COPRIME FUNCTION
  if (gcd(a,b)==1){
  printf("%d and %d are coprime",a ,b);
  }
 
  }
  
 void pair(int a[],int n){
 for (int i =1;i<n;i++){
 for(int j=i+1;j<=n;j++){
 coprime(a[i],a[j]);}       // calling coprime function to check whether they are coprime or not
 }
 }
  
  int main(){
   int a[5];
   printf("Enter five numbers\n");
   for (int i=0;i<5;i++){ // TAKING INPUT 5 VALUES 
   scanf("%d",&a[i]);
   }
   pair(a,5); // calling pair function 
   return 0;
   }
   
