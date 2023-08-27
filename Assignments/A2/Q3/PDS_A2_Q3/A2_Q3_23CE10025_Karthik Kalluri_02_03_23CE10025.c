#include <stdio.h>
int main()
{
  int p,t;
  float r,a,k;
  printf("Amount being deposited(IN RUPEES): ");
  scanf("%d",&p);
  printf("Tenure of deposit(IN YEARS) : ");
  scanf("%d",&t),
    printf("The applicable intrest rate(IN PERCENTAGE) : ");
  scanf("%f",&r);
  a=(p*t*r)/100;
  k=a+p;
  printf("The amount payable is :%f",k);
  return 0;
}
    
