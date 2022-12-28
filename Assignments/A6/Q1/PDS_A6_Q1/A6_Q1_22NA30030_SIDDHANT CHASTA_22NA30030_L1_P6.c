/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 6
Description :A program to print the first k terms of a particular series 
*/

#include<stdio.h>
int print_term(int k);

int main(){
    int k,term;
    printf("enter the number : ");
    scanf("%d",&k);
  if(k>=0){
     for(int i=0;i<k;i++){
       term = print_term(i);
       printf("%d\t",term);
     }
  }
  else printf("Invalid input\n");
    return 0;
}

int print_term(int k){
       if(k==0 || k==1|| k==2) 
       return k;

       else 
       return 3*print_term(k-2)*print_term(k-1) - 2*print_term(k-2)*print_term(k-3) +1;
     }
