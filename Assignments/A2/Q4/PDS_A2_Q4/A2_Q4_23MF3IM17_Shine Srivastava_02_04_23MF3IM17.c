//Roll no:23MF3IM17
//NAME : SHINE SRIVASTAVA

#include <stdio.h>
int main()
{
  int m,n,sqm,sqn,sum;
  
 
  
  printf("Enter value of m :\n");
  scanf("%d",&m);
  printf("Enter value of n :\n");
  scanf("%d",&n);

  sqm=m*m;
  sqn=n*n;
  sum=m+n;
  
  printf("The sum = %d\n",m+n);
  printf("The difference = %d\n",m-n);
  printf("The product = %d\n",m*n);
  printf("The integer quotient = %d\n",m/n);
  printf("The integer remainder = %d\n",m%n);
  printf("The floating point quotient = %f\n",(float)(m/n));
  printf("The sum of squares = %d\n",sqm+sqn);
  printf("The square of sum = %d\n",(sum*sum));
  printf("The average as a floating point number = %f\n",((float)sum)/2);
  printf("The average of the sum of squares as a floating point number = %f\n",(float)(sqm+sqn)/2);

  return 0;
}
  
  
  
  
     
  
  
  
