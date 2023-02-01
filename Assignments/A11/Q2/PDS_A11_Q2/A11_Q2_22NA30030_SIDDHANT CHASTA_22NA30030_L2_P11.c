/*
Section 14 
Roll No. : 22NA30030
Name : Siddhant Chasta 
Assignment No. : 11
Description :A program to check if a given number n ,belongs to the fibonacci sequence.
*/

#include<stdio.h>

void checkFib(int n);

int main()
{
  int N;
  int fib[N];
  printf("Enter the number : ");
  scanf("%d",&N);
  
  checkFib(N);
}

void checkFib(int n)
{
  int fib[n],check;
  for(int i=0;i<=100;i++)
  {
         fib[0] = 1;
         fib[1] = 1;
         fib[i] = fib [i-1] + fib[i-2];
    if(fib[i] == n)
    {
    check = 1;
    }
  }
    if(check == 1 || n==0 || n==1) printf("Yes : It belongs to Fibonacci sequence\n");
    else printf("No\n");
    
}
  
  























   
