#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
  int n,rev=0,a=0;
  printf("enter the number:\n");
  scanf("%d",&n);
  a=n;
    while (n>0)
      {
	rev=rev*10+(n%10);
	n=n/10;
      }
  if(rev==a){printf("the given number is palindrom\n");}
  else printf("the given number is not a palindrom\n");
  return 0;
}
