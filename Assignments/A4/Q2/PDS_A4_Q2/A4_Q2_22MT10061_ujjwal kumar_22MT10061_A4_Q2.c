#include<stdio.h>
  int main()
{
 int k;
  printf("Enter a number to get sum of digits ");
   scanf("%d",&k); \\to get input a no. from user
int sum_of_digits;
for (sum_of_digits=0;k!=0;) \\to exclude 0 we use k!=0
{
   sum_of_digits=sum_of_digits+(k%10); \\to get once place digit 
   k=k/10;
}

   printf("The sum of digits of number is %d\n" , sum_of_digits); \\printing the final result




   return 0;
}
