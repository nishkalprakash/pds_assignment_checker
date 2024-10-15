#include<stdio.h>
  
  int digits(int N){
 if(N==0) return 0;
 return 1+digits(N/10); }
  
 
  
int main(){

 int N ;
  scanf("%d",&N);
  
  if(N>100000){
  printf("THE NUMBER IS OUT THE GIVEN RANGE\n");}
  
  if(N==0){
  printf("Palindrome");}
  int a=digits(N);
   
 
 printf("number of digits = %d\n",a);
  
  
  
  

     
     return 0;
     }
     
     
     
