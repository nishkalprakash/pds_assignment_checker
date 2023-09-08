//Roll No.-23CH30007
//Name- Asad Ali Jaffrey

#include<stdio.h>

int main() {
  int n,rev=0,ld,original;
  printf("Enter a number\n");
  scanf("%d",&n);
  original=n;

  while(n>0) {
    ld=(n%10);
    rev=rev*10+ld;
    n=n/10;
  }

  if (original==rev) {
    printf("The digits of %d form a palindrome\n",original);
  }
  else {
    printf("The digits of %d dont form a palindrome\n",original);
  }

  return 0;
}
