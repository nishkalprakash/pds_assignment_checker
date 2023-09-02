//roll_23GG10021
//name_kajal_kumari
#include<stdio.h>
int main()
{
  int a,b,c,d,e,f;
  printf(" enter coefficient of x^0:");
  
  scanf(" %d", &f);
  printf(" enter coefficient of x^1:");
  scanf(" %d",&e);
  printf(" enter coefficient of x^2:");
  scanf("%d", &d);
  printf(" enter coefficient of x^3:");
  scanf("%d",&c);
  printf(" enter coefficient of x^4:");
  scanf("%d",&b);
  printf("enter coefficient of x^5:");
  scanf("%d",&a);
 polynomial:a*x^5+ b*x^4+ c*x^3 + d*x^2 +e*x + f;
  printf(" the polynomial is:", a,b,c,d,e,f);
 derivative:5a*x^4+ 4b*x^3 +3c*x^2+ 2d*x+ e;
  printf(" the deivative is:", a,b,c,d,e);
  return 0;
}
    
  
  
