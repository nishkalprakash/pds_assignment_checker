//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main() {
  int i,copy , j = 0;
  printf("Enter number: ");
  scanf("%d", &i);
  copy = i;
  while (i > 0) {
    j +=  i % 10;
    i /= 10;
    j *= 10;
  }
  j /= 10;
  if (j == copy)
    printf("Number is a palindrome\n");
  else
    printf("Number is not a palindrome\n");
  return 0;
}
