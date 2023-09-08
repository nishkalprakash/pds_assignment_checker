//Roll No.: 23MA10016
//Name: Aryan Raina

#include <stdio.h>

int main() {
  int n;
  printf("Enter a number : ");
  scanf("%d", &n);

  int revn = 0;

  for (int i = n; i; i/=10) revn = revn*10 + (i % 10);

  if (n  == revn) printf("The number %d is a palindrome\n", n);
  else printf("The number %d is not a palindrome\n", n);
}
