// Program to display first n terms of a series
// Code Creater=Aditya Samir Bhide
// Roll No:24NA10011 
#include<stdio.h>
void main()
{
  int N,a=1,b=0,c=0; // a,b and c are the terms in the series in the order a,b,c
  printf("\nEnter N\n");
  scanf("%d",&N);
  if(N<=0)
  {
    printf("\nN is invalid");
  }
  else
  {
    for(int i=1;i<=N;i++)
    { 
     c=a-b; // Logic of the sequence is A(n)=A(n-2) -A(n-1) 
     if(i<N)
     {
      printf("%d,",c); // To print "," after each except the last term (so that output is exactly similar to test cases given)
      }
      else
      {
        printf("%d",c); //For the last term in the series "," is not printed after last term
      }
      a=b; // moving a and b forward by one term
      b=c;
    }
  }
}
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    


