//Roll no.: 23Ch10006
//Name: Anshuman Acharya
#include<stdio.h>
#include<math.h>
int main()
{
  // Derivative of a polynomial....
  int a, b, c, d, e, f;
  printf("Enter coefficient of x^5: ");
  scanf("%d",&a);
  printf("\nEnter coefficient of x^4: ");
  scanf("%d",&b);
  printf("\nEnter coefficient of x^3: ");
  scanf("%d",&c);
  printf("\nEnter coefficient of x^2: ");
  scanf("%d",&d);
  printf("\nEnter coefficient of x^1: ");
  scanf("%d",&e);
  printf("\nEnter coefficient of x^0: ");
  scanf("%d",&f);
  printf("\nYour polynomial is %dx^5+ %dx^4+ %dx^3+ %dx^2+ %dx+ %d\n",a,b,c,d,e,f);
  printf("Your derivative is %dx^4+ %dx^3+ %dx^2+ %dx^1+ %d\n",5*a, 4*b, 3*c, 2*d, e);
    
 
  return 0;
}
