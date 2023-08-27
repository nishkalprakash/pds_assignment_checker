//Roll No.: 23CS30009
//Name: Arnav Singh

#include <stdio.h>

int main(){
  float n, dec;
  int intig;
  printf("Enter a decimal number: ");
  scanf("%f", &n);
  intig=(int)n;
  dec=n-intig;
  printf("Integral part=%d\n", intig);
  printf("Fractional part=%f\n", dec);
  return 0;
}
