//Roll No: 23ME30020
//Name: Kalepu Jyotiraditya

#include <stdio.h>
int main()
{
  int num,digit, sum=0,max_1=0,max_2=0;
  printf("Enter a number ");
  scanf("%d",&num);
  while(num>0)
    {
      digit=num%10;   // Extracting the digits of the number entered
      sum += digit;
      if(digit > max_1) max_1 = digit;    // Checking for maximum digit
      if(max_2 < max_1 && digit > max_2 && digit < max_1) max_2 = digit;  // Checking for second maximum digit
      num = num/10;
    }
  printf("Sum of digits = %d\nLargest = %d Second Largest = %d\n",sum,max_1,max_2);
  return 0;
}
