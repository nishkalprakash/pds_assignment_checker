//Rollno:<23MT30010>
//Name:<Purva Harde>

#include<stdio.h>
int main()
{
  int a, b;
  printf("Enter the distance travelled:");
  scanf("%d", &a);
  printf("Enter hours the taxi was retained:");
  scanf("%d", &b);
  int total_sum;
  if(b < 1)
    total_sum=0;
  else if(1 <= b <  12)
    total_sum=200;
  else if(12 < b < 24)
    total_sum=300;
  else if(b >= 24)
    total_sum=500;
       if( a < 8 )     
     total_sum=total_sum+20;
  else if(a <= 12)
    total_sum=total_sum+10;
  else if(a <= 16)
    total_sum=total_sum+8;
  else if (a <= 20)
    total_sum=total_sum+6;
  else
	total_sum=total_sum+5;
       {
	 printf("the total fare for the taxi is %d", total_sum);
       }
       return 0;
}
  
  
