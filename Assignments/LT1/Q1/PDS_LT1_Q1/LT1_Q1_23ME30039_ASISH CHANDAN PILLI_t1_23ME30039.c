//SET 1 Q1
// name : pilli asish chandan
// roll no: 23ME30039

#include <stdio.h>

int main() {
  //part a b and c are in the same block,please check them
  
  printf("enter a positive integer less than 9999");
  unsigned int n; //in question only positive integer is asked
  scanf("%u",&n);
   unsigned int a;
   unsigned int b;

   unsigned int c;
   unsigned int d;
   
  if(n>999) {
   unsigned int a=n%10;
   unsigned int b=(n%100-a)/10;

   unsigned int c=(n%1000-a-b)/100;
   unsigned int d=(n%10000-a-b-c)/1000;
   int checksum = a+b+c+d+4;
   printf("input is %u and encoded is %u%u%u%u with cheksum is %u%u%u%u%d",n,(d+1),(c+1),(b+1),(a+1),(d+1),(c+1),(b+1),(a+1),checksum);
  }
  if(n>99 && n<1000) {
   unsigned int a=n%10;
   unsigned int b=(n%100-a)/10;

   unsigned int c=(n%1000-a-b)/100;

   int checksum = a+b+c+3;
   
     printf("input is %u and encoded is %u%u%u with cheksum is %u%u%u%d",n,(c+1),(b+1),(a+1),(c+1),(b+1),(a+1),checksum);
  }
  if(n>0 && n<100) {
   unsigned int a=n%10;
   unsigned int b=(n%100-a)/10;
   int checksum = a+b+2;

   printf("input is %u and encoded is %u%u with cheksum is %u%u%d",n,(b+1),(a+1),(b+1),(a+1),checksum);
  }}
  
 
     
  
      
