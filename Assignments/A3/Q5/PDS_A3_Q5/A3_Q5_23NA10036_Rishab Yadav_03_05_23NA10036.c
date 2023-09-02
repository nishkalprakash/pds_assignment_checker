//Roll number - 23NA10036
//Rishab Yadav

#include <stdio.h>

int main(){

  int a, b, c, d, e, f;

  printf("Enter coefficent of x^0:\n");
  scanf("%d", &f);

  printf("Enter coefficent of x^1:\n");
  scanf("%d", &e);

  printf("Enter coefficent of x^2:\n");
  scanf("%d", &d);

  printf("Enter coefficent of x^3:\n");
  scanf("%d", &c);

  printf("Enter coefficent of x^4:\n");
  scanf("%d", &b);

  printf("Enter coefficent of x^5:\n");
  scanf("%d", &a);

  if(a<0 || b<0 || c<0 || d<0 || e<0 || f<0){
    printf("Please enter positive coefficients.\n");
    return 0;
  }

  printf("Your polynomial is: %d*x^5 + %d*x^4 + %d*x^3 + %d*x2 + %d*x + %d \n", a, b, c, d, e, f);
  
  printf("The derivate of your polynomial is %d*x^4 + %d*x^3 + %d*x^2 + %d*x + %d", a*5, b*4, c*3, d*2, e);

  return 0;
}
