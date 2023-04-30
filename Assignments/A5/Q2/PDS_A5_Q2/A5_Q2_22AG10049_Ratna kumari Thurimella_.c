#include<stdio.h>

int main()
{
  int numb, red, n=3;
  scanf("%d",&numb);
  while (n<= numb)
 {
    red = prime(n);
    if (red == 0)

    printf("%d is prime number\n",n);
    n++;
 }
return 0;
}
  int prime (int x)
{
  int i, test;
  i=2, test =0;
  while ((i <= sqrt(x)) && (test ==0))
 {
    if (x%i==0) test = 1;
     i++;
 }
 return test;
}