/*this program is reverse a three digit number*/
/*Name : Susank Chigilipalli
  Section : 3A
  Assignment class 6*/
#include<stdio.h>
void main()
{
  int n,a,b,c;
  printf("Enter a three digit number :");
  scanf("%d",&n);
  a=n%10;
  n=n/10;
  b=n%10;
  n=n/10;
  c=n;
  printf("reversed number is %d%d%d\n",&a,&b,&c);
}
