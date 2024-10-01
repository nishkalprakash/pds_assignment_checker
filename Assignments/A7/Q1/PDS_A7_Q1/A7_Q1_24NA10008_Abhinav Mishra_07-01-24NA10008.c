// ABHINAV MISHRA
// 24NA10008

#include <stdio.h>

int fact(int n){   // creating factorial function
 int a=1;
 for(int i=1;i<=n;i++){
   a=a*i;
   }
   return a;
   }
 int power(int x,int n){  // creating power  function
    int a =1;
    for(int i =0;i<n;i++){
    a =a*x;
    }
    return a;  
 }
 int main(){
 int n;
 int x;
 printf("Enter value of x and n \n");
 scanf("%d%d",&x,&n); // taking value of x and n
  float sum =0.0;
      for(int i=0;i<n;i++){
      sum+=(float)(power(x,i))/(float)fact(i);}  // creating given function by calling power and fact function
      printf("%f",sum); // printing value of sum
 return 0;
 }
 
 
