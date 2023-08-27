#include <stdio.h>
int main()
{
  int m,n;
  printf("enter 2 digits");
  scanf("%d%d",&m,&n);

  printf("sum=%d\n",m+n);
  printf("difference=%d\n",m-n);
  printf("product=%d\n",m*n);
  printf("integer quotient=%d\n",m/n);
  printf("integer remainder=%d\n",m%n);
  printf("floating point quotient=%f\n",(m/n));
  printf("sum of squares=%d\n",m*m+n*n);
  printf("square of sum=%d\n",((m+n)*(m+n)));
  printf("average=%f\n",(float)((m+n)/2));
  printf("average of sum of squares=%f\n",(float)((m*m+n*n)/2));
}
  
  
  
    
