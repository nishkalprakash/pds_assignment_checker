//22EE10036//
#include<stdio.h>
int main()
{int a, b, c, d, e;
  printf("Enter five numbers a, b, c, d, e\n");
  scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
  if(a%2 == 1 && b%2 == 1 && c%2 == 0 && d%2 == 0 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", c, d, e, a, b);
  if(a%2 == 1 && b%2 == 0 && c%2 == 1 && d%2 == 0 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", b, d, e, a, c);
  if(a%2 == 1 && b%2 == 0 && c%2 == 0 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", b, c, e, a, d);
  if(a%2 == 1 && b%2 == 0 && c%2 == 0 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", b, c, d, a, e);
  if(a%2 == 0 && b%2 == 1 && c%2 == 1 && d%2 == 0 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, d, e, b, c);
  if(a%2 == 0 && b%2 == 1 && c%2 == 0 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, c, e, b, d);
  if(a%2 == 0 && b%2 == 1 && c%2 == 0 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, c, d, b, e);
  if(a%2 == 0 && b%2 == 0 && c%2 == 1 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, b, e, c, d);
  if(a%2 == 0 && b%2 == 0 && c%2 == 1 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, b, d, c, e);
  if(a%2 == 0 && b%2 == 0 && c%2 == 0 && d%2 == 1 && e%2 == 1)
  printf("The numbers %d, %d, %d are even and %d and %d are odd\n", a, b, c, d, e);
  if(a%2 == 0 && b%2 == 0 && c%2 == 1 && d%2 == 1 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", c, d, e, a, b);
  if(a%2 == 0 && b%2 == 1 && c%2 == 0 && d%2 == 1 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", b, d, e, a, c);
  if(a%2 == 0 && b%2 == 1 && c%2 == 1 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", b, c, e, a, d);
  if(a%2 == 0 && b%2 == 1 && c%2 == 1 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", b, c, d, a, e);
  if(a%2 == 1 && b%2 == 0 && c%2 == 0 && d%2 == 1 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, d, e, b, c);
  if(a%2 == 1 && b%2 == 0 && c%2 == 1 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, c, e, b, d);
  if(a%2 == 1 && b%2 == 0 && c%2 == 1 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, c, d, b, e);
  if(a%2 == 1 && b%2 == 1 && c%2 == 0 && d%2 == 0 && e%2 == 1)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, b, e, c, d);
  if(a%2 == 1 && b%2 == 1 && c%2 == 0 && d%2 == 1 && e%2 == 0)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, b, d, c, e);
  if(a%2 == 1 && b%2 == 1 && c%2 == 1 && d%2 == 0 && e%2 == 0)
  printf("The numbers %d, %d, %d are odd and %d and %d are even\n", a, b, c, d, e);
  return 0;
}
