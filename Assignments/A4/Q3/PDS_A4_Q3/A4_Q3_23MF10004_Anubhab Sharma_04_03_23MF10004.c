#include <stdio.h>

int main()
{
  int n, N=0, digit, x;
  printf("Enter a number: \n");
  scanf("%d", &n);
  x = n;
  while (n != 0)
    {
    digit = (n % 10);
    N = N*10 + digit;
    n = n / 10;
    }
  if (x == N)
    printf("The number entered is a palindrome number");
  else
    printf("Not palindrome");
}
