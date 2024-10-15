#include<stdio.h>
#include<math.h>

int digits(int n);

void Ispalindrome();

int main()
{    
         int n;
         scanf("%d" ,&n);
         digits(n);
 }
 

  
  int digits(int n){
      if (n==0) return 0;
      return 1+digits(n/10);
      }
   
  void Ispalindrome()
  {
       last_digit = n%10
       first_digit = n/(int) (10^(d-1));
       
