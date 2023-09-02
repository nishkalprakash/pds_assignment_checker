// Roll Number:23ME10063
// Name:Prem Pastagia

#include <stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf("Enter the coefficient of x^0:\n");
  scanf("%d",&f);
    printf("Enter the coefficient of x^1:\n");
  scanf("%d",&e);
    printf("Enter the coefficient of x^2:\n");
  scanf("%d",&d);
    printf("Enter the coefficient of x^3:\n");
  scanf("%d",&c);
    printf("Enter the coefficient of x^4:\n");
  scanf("%d",&b);
    printf("Enter the coefficient of x^5:\n");
  scanf("%d",&a);

  printf("The polynomial is %d*x^5 + %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d \n",a,b,c,d,e,f);
  printf("The first  derivative of polynomial is %d*x^4 + %d*x^3 + %d*x^2 + %d*x^1 + %d\n",(a*5),(b*4),(c*3),(d*2),e);

  return 0;
  
}
