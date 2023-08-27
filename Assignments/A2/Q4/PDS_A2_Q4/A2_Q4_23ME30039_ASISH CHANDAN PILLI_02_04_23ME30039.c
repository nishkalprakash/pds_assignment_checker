//Roll No.: 23ME30039
//Name. : PILLI ASISH CHANDAN

#include<stdio.h>
#include<math.h>

int main() {
  int m,n;
  printf(" enter the value of m \n ");
	 scanf("%d", &m);
  printf(" enter the value of n \n");
  scanf("%d", &n);

  printf(" a) the sum %d \n",m+n);
  printf(" b) the difference %d \n",m-n) ;
  printf(" c) the product %d \n",m*n); 
  printf(" d) the integer quotient %d \n",m/n);
  printf(" e) the integer remainder %d \n", m%n); 
  printf(" f) the floating point quotient %f \n",(double)m/n);
  printf(" g) the sum of squares %d \n",m*m+n*n);
  printf(" h) the square of the sum %f \n",(double)(m+n)*(m+n));
  printf(" i) the average %f \n",(double)(m+n)/2);
  printf(" j) the average of sum of squares %f \n",(double)(m*m+n*n)/2);
  return(0);
 }
  
