#include <stdio.h>
#include <stdlib.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  int num;
  printf("Enter the number:");
  scanf("%d", &num);
  int sum=0, last_digit, sec_largest=0, largest=0;
  while(num)
    {
      last_digit = num - (num/10)*10;
      sum += last_digit;
      if (last_digit>largest){sec_largest = largest; largest = last_digit;}
      else if (last_digit>sec_largest && last_digit<largest){sec_largest = last_digit;}
      num /=10;
    }
  printf("Sum of the digits = %d\nLargest = %d  Second Largest = %d\n", sum, largest, sec_largest);
  
  return 0;
}
