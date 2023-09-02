//Roll No.: 23EC30056
//Name: Swaraj Dian

#include <stdio.h>
int main()
{
  int a=0,b=0,c=0,d=0,e=0,f=0;          //Variables for co-efficients
  printf("Enter coefficient of x^0: "); 
  scanf("%d",&f);                       //Inputs for coefficients 
  printf("Enter coefficient of x^1: ");
  scanf("%d",&e);
  printf("Enter coefficient of x^2: ");
  scanf("%d",&d);
  printf("Enter coefficient of x^3: ");
  scanf("%d",&c);
  printf("Enter coefficient of x^4: ");
  scanf("%d",&b);
  printf("Enter coefficient of x^5: ");
  scanf("%d",&a);
  if (a!=0)
    {
      printf("Polynomial: %d*x^5 + %d*x^4 +%d*x^3 +%d*x^2 +%d*x + %d",a,b,c,d,e,f);  //Printing polynomial
      printf("\nDeriviative: %d*x^4 +%d*x^3 +%d*x^2 +%d*x + %d",a*5,b*4,c*3,d*2,e);  //Printing Deriviative
    }
  else
    printf("Invalid input, Not a degree 5 polynomial");
  return 0;
}
