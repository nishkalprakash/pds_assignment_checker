#include<stdio.h>
int gcd(int a, int b){//to find the gcd of two numbers
   int temp;
   if (a>b){
   temp=a;
   a=b;
   b=temp;
   }
   while ((b%a)!=0){
   temp=b%a;
   b=a;
   a=temp;
   }
   return a;
   }
void CoPrime(int a, int b){//to print the coprime numbers
    if(gcd(a, b)==1){
    printf("%d and %d are Co-Prime\n", a, b);
    }
    }
int main(){
   int a[5], i, j, count=0;
   for(i=0 ; i<5 ; i++ )
   {
   scanf("%d", &a[i]);
   }
   for(i=0 ; i<5 ;i++ ){
     for(j=i+1 ; j<5 ; j++ ){
     CoPrime(a[i], a[j]);
     }}
     for(i=0;i<5;i++){
     for(j=i+1 ; j<5 ; j++ ){
     if(gcd(a[i], a[j])==1){
     count++;}
     }}
    if (count==0){
    printf("No coprime found");//in case no coprime are there
    }
    return 0;
    }
    
    
    
