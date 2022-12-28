/*
SURABHI DHAVALE
22ME10026
ASSIGNMENT7
SEC14
*/


#include<stdio.h>
//declaring the function name print_term


int print_term(int n){
if(n==0){
return 0;                                                                     
}

if(n==1){
  return 1;
}        
if(n==2){
return 2;
}
return((3*print_term(n-2)*print_term(n-3)-2*print_term(n-3)-3*print_term(n-4)+1);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                  
}           
 

int main(){

int k;
printf("enter the value of k");//taking input from user
scanf("%d,&k);
if (n<0){
printf("invalid output");
}
int (n>=0)
for(int (k=0;k<=(n-1);k++)
 {print "%d",print_term(k);//calling the function
}
print_term(k);
return 0;





