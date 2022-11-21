
#include<stdio.h>
#include<math.h>

int main()
{ 
  int a,b,c;float s1, s2;
  printf(" Enter the values (a,b and c) for the quadratic equation: ");
  scanf("%d %d %d", &a,&b,&c);
  s1=(-b+sqrt(b*b-4*a*c));
  s2=(-b-sqrt(b*b-4*a*c));
  printf("root=%f, %f", s1,s2);
 return 0;
}
