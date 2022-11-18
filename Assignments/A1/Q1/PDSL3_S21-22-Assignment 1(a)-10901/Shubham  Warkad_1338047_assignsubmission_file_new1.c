#include <stdio.h>

int main() {
  int a,u,alpha,t;
  float d;
  printf("Enter the value of x coordinate:");
  scanf("%d",&a);
   printf("Enter the value of initial speed:");
  scanf("%d",&u);
   printf("Enter the value of acceleration:");
  scanf("%d",&alpha);
  printf("Enter the value of time:");
  scanf("%d",&t);
  d=(u*t)+(0.5*alpha*t*t)+a;
  printf ("The value of distance travelled by particle is %f",d);
  return 0;
}