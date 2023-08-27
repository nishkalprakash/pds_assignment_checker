//Roll No:<23MT30029>
//Name:<Tanaya Moghe>
#include <stdio.h>
int main()
{ int a; int b; float c; float d; float x;
  printf("Enter amount being deposited");
  scanf("%d",&a);
  printf ("Enter period of deposit in years");
  scanf("%d", &b);
  printf ("Enter rate of interest");
  scanf ("%f" , &c);
  x = a*b*c/100;   //formula for compound interest is as follows
  d = a+x;
  printf ("The total payable amount at the end of deposit period is %f\n" , d);
  return 0;
}
  
