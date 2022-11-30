#include<stdio.h>
int main()
 {
   int a,p;
   printf("Enter the number:");
   scanf("%d",&a);
  
while(a!=0){
 p=a%10;

a=a/10;
switch(p){
  case 1: printf("One ");break;
  case 2: printf("Two "); break;
  case 3: printf("three ");break;
  case 4: printf("Four ");break;
  case 5: printf("Five ");break;
  case 6: printf("Six ");break;
  case 7: printf("Seven ");break;
  case 8: printf("Eight ");break;
  case 9: printf("Nine ");break;
  case 0: printf("Zero "); break; }
}


  return 0;
}

