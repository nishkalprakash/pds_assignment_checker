#include <stdio.h>
int main()
{
  unsigned int time, principle;
  float rate, i, amt;
  printf("Enter the principle and time=");
  scanf("%u%u",&principle,&time);
  printf("Enter the rate of interest=");
  scanf("%f", &rate);
  i=(principle*rate*time)/100;
  amt= principle+i;
  printf("The total amount to be paid= %f\n", amt);
  return 0;
}
