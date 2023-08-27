#include <stdio.h>
int main()
{
  int  m,n;
  printf("Enter the value of m : ");
  scanf("%d",&m);
  printf("Enter the value of n : ");
  scanf("%d",&n);
  printf("The sum m+n=%d\n",m+n);
  printf("The difference m-n=%d\n",m-n);
  printf("The prouduct m*n=%d\n",m*n);
  printf("The integer quotient m/n=%d\n",(m/n));
  printf("The integer remainder=%d\n",m%n);
  printf("The floating point qoutient is m/n=%f\n",((float)m)/((float)n));
  printf("The sum of squares m^2+n^2 is %d\n",((m*m)+(n*n)));
  printf("The square of the sum (m+n)^2 is %d\n",(m+n)*(m+n));
  printf("The average (m+n)/2 = %f\n",((float)(m+n))/2);
  printf("The average of sum of squares=%f\n",(((float)(m*m)+(n*n)))/2);

  
  return 0;
}
