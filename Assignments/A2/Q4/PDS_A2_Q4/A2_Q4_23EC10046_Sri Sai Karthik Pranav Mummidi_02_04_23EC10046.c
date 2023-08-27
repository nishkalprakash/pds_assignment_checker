//Rollno: 23EC10046
//Name: Mummidi sri sai karthik pranav
#include<stdio.h>
int main(){
  int m,n;
  printf("enter two integral numbers=");
  scanf("%d%d",&m,&n);
  int sum=m+n;
  printf("the sum=%d\n",sum);
  int diff=m-n;
  printf("the difference=%d\n",diff);
  int prod=m*n;
  printf("the product=%d\n",prod);
  printf("the integer quotient=%d\n",m/n);
  printf("the integer remainder=%d\n",m%n);
  printf("the floating point quotient=%f\n",(float)m/n);
  printf("the sum of the squares=%d\n",m*m+n*n);
  printf("the square of the sum=%d\n",(m+n)*(m+n));
  printf("the average=%f\n",(float)(m+n)/2);
  printf("the average of the sum of the sqares=%f\n",(float)(m*m+n*n)/2);
  return 0;
}
