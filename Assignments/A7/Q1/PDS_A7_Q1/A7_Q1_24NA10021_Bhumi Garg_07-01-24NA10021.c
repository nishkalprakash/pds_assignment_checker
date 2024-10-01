//code to compute sum of series
// code creator: Bhumi Garg
// Roll No: 24NA10021

#include <stdio.h>
// this function calculates x to the power of n by undergoing repeated multiplication in a loop

int power (int x, int n){
   
     int i, temp = 1;
      for(i=1; i<=n; i++)
      {
        
        temp = temp * x;
      }
       
        return temp;
  }
 
// This function is for calculating the factorial of a number which is done by continued multiplication of i which is subsequently decremented till 1//

int fact (int n){
    
    int i, factorial = 1;
    
    for( i = n; i > 0; i--)
    {
         
         factorial = factorial*i;
    }
    
    return factorial;
}

int main(){

    int x,n,i;
    float sum = 1, temp;
    
    scanf("%d%d", &x, &n);
   
   // Since the series is a sum, the loop computes the value of power and factorial for each iteration and adds it// 
    for ( i = 1; i<=n; i++)
   {
      
      temp = (float)power(x,i)/fact(i);
      // typecasting is done here since both power and fact functions return integer values//
      
      sum = sum + temp;
   }
    printf("%f", sum);
    
 
    return 0;
    
}
    
    
   
