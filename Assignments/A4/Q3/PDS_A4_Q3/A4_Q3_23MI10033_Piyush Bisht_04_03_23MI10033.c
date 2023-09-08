//Roll No.:23MI10033
//Name:Piyush Bisht

#include<stdio.h>

int main()
{
  int n,u;
  printf("enter a number ");
  scanf("%d",&n);
  if (n/10==0){
    u=n;
  }
  else if(n/100==0){
    u=(n%10)*10+((n/10)%10);
  }
  else if(n/1000==0){
    u=(n%10)*100+((n/10)%10)*10+((n/100)%10);
  }
  else if(n/10000==0){
    u=(n%10)*1000+((n/10)%10)*100+((n/100)%10)*10+(n/1000)%10;
  }
  else if(n/100000==0){
    u=(n%10)*10000+((n/10)%10)*1000+((n/100)%10)*100+((n/1000)%10)*10+((n/10000)%10);
  }
  else if(n/1000000==0){
    u=(n%10)*100000+((n/10)%10)*10000+((n/100)%10)*1000+((n/1000)%10)*100+((n/10000)%10)*10+((n/100000)%10);
  }
  if (n==u){printf("The no. is a palindrome");}
  else {printf("The no. is not a palindrome");}
  return 0;
}
  
  


    
    
    
    
