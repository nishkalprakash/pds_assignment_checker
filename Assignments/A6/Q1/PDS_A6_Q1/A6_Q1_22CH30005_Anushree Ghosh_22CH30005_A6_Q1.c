/*
ANUSHREE GHOSH
22CH30005
ASSIGNMENT NO 7
SEC 14
*/

#include<stdio.h>
 //declaring a function name print_term

 int print_term(int n){
 //base conditions
   if(n==0){
     return 0;
   }
   if(n==1){
     return 1;
  }
   if(n==2){
     return 2;
  }
 return (3*print_term(n-1)*print_term(n-2)-2*print_term(n-2)*print_term(n-3)+1);
   
 }

 int main(){
 int n;
 
 printf("enter the value of n");//taking input from the user
 scanf("%d",&n);
 if(n<0){
  printf("invalid input");
 }
  if(n>=0){
  for(int k=0;k<=(n-1);k++){
  printf("%d",print_term(k)) ;//caling the print_term function
  }
  printf("\n");
 }
  return 0;
 }

