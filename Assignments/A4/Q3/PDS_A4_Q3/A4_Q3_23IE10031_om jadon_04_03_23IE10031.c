#include <stdio.h>
#include <stdlib.h>

// Roll No. 23IE10031
// Name- Om Singh Jadon

int main()
{
  int num, rev_num=0, num_digits=0;
  printf("Enter the Number: ");
  scanf("%d", &num);
  int test_num = num;
  while (test_num)
    {
      test_num = test_num/10;
      num_digits++;
    }
  
  test_num = num;
  int last_digit;

  while (test_num)
    {
      last_digit = test_num - (test_num/10)*10;
      int zeroes = 1;
      for (int i=0;i<(num_digits-1);i++) zeroes *= 10;
      rev_num = rev_num + (zeroes*last_digit);
      num_digits--;
      test_num = test_num/10;
    }
  if (rev_num == num) printf("It's a Palindrome!\n");
  else printf("It's not a Palindrome.\n");
}
