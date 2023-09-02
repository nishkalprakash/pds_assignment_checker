//Roll no: 23EE10036
//Name: Kushagra Poonia

#include <stdio.h>

int main(){
  int x5 = 0; int x4 = 0; int x3 = 0; int x2 = 0; int x1 = 0; int x0 = 0;

  printf("Enter the coefficients of x^0: \n");
  scanf("%d", &x0);
  printf("Enter the coefficients of x^1: \n");
  scanf("%d", &x1);
  printf("Enter the coefficients of x^2: \n");
  scanf("%d", &x2);
  printf("Enter the coefficients of x^3: \n");
  scanf("%d", &x3);
  printf("Enter the coefficients of x^4: \n");
  scanf("%d", &x4);
  printf("Enter the coefficients of x^5: \n");
  scanf("%d", &x5);

  printf("Polynomial: %d*x^5+%d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n", x5, x4, x3, x2 ,x1, x0);
  printf("Derivative: %d*x^4+%d*x^3+%d*x^2+%d*x^1+%d\n", 5*x5, 4*x4, 3*x3, 2*x2, 1*x1);
}
