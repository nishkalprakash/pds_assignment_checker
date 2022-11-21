#include<stdio.h>
#include<math.h>
int main()
{
  int a,b,c,Q;
  
  float P,R,S;
  
  printf("enter number a\n");
  scanf("%d",&a);
  printf("enter number b\n");
  scanf("%d",&b);
  printf("enter number c\n");
  scanf("%d",&c);
  printf("Q=%d\n",b*b-4*a*c);// b*b -4ac =Q
  printf("P=%f\n",sqrt(Q)); //p= sqrt(b*b-4*a*c)
  printf("R=%f\n",-b+P);//R=-b+sqrt(b*b-4*a*c)
  printf("S=%f",R/2*a);//S= -b+sqrt(b*b-4*a*c)/2*a
  return 0;
}
