//Roll no:<23MT30010>
//Name:<Purva Harde>

#include <stdio.h>
int main()
{ int a; int b; float c; float d; float x;
  printf("Enter amount being deposited");
  scanf("%d",&a);
  printf("Enter period of deposit in years");
  scanf("%d", &b);
  printf("Enter rate of interest");
  scanf("%f", &c);
  x = a*b*c/100; //formula for compound intrest as follows
  d = a+x;
  printf("The total payable amount at the end of the deposit is %f\n", d);
  return 0;
}
