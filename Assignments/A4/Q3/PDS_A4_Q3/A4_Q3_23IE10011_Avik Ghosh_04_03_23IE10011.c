//Roll No.:23IE10011
//Name: Avik Ghosh
#include <stdio.h>

int main( ) {
  int n,num,rev=0;
    printf("Enter a number =");
  scanf("%d",&n);
  num=n;
  //to store the reverse of input number in variable rev
  while(n>0) {
    rev= (rev * 10) + (n % 10);
    n=n/10;}
  if(num == rev)
    printf("%d is a palindrome number\n",num);
  else
    printf("%d is not a palindrome number\n",num);
  return 0;
}
