/* 
 Section 14
 Roll No: 22AE10034
 Name: Shaon Malik
 Assignment No :4
 Question No :2
 Description :program to find sum of digits of a number
 */

#include <stdio.h>
int main()
{
  int N,sum=0;//declaring variable
  printf("Enter a number from -999999 to 999999:");
  scanf("%d", &N);
  while(N!=0)
 {
   sum+=N%10;//summing each digit
   N/=10;//reducing the used digit
 }
  printf("The sum of digits: %d ",sum);   
return 0;
}
