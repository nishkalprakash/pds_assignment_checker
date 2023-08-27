#include<stdio.h>
int main(){
  int m,n;
  printf("Enter m, n");
  scanf("%d %d",&m,&n);
  printf("Sum of m&n is %d\n",m+n);
  printf("Subtraction of m&n is %d\n",m-n);
  printf("Product of m&n is %d\n",m*n);
  printf("Division of m&n is %d\n",m/n);
  printf("Remainder of m&n is %d\n",m%n);
  printf("Floating point division of m&n is %f\n",(float)m/n);
  printf("Sum of squares of m&n is %d\n",m*m+n*n);
  printf("Square of the sum of m&n is %d \n", (m+n)*(m+n));
  printf("Avarge division of m&n is %f\n",((float)m+n)/2);
  printf("The average of the sum of the squares m&n is %d\n",((m*m)+(n*n))/2);
  return 0;
}
