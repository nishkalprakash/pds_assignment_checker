
/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :4
 Question No : 1
 Description :program to find factors of a number
 */

#include <stdio.h>
int main()
{
  int N;//declaring variable
  printf("Enter a number from -999999 to 999999:");
  scanf("%d", &N);
  if ( N<0)
     N=N*(-1);//for negative numbers 

  if (N==0)
     printf("0 ");//for N=0,only factor is 0
  else{
     for(int i=1;i<=N;++i)
     {
       if(N%i==0)
       printf("%d ",i);
      }
     }
return 0;
}
