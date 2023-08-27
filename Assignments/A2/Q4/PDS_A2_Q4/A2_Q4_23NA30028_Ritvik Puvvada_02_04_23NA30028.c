//Roll No:23NA30028//
//Name:Ritvik Puvvada//

#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter 2 numbers:");    //input 2 numbers
  scanf("%d%d",&m,&n);
  printf("The sum is %d\n",(m+n));
  printf("The difference is %d\n",(m-n));
  printf("The product is %d\n",m*n);
  printf("the integer quotient is %d\n",m/n);  //will give int as both m and n are integers
  printf("The floating point quotient is %f\n",(float)m/n);   
  printf("The sum of squares is %d\n",(m*m)+(n*n));
  printf("The square of the sum is %d\n",(m+n)*(m+n));
  printf("The average is %f\n",(float)(m+n)/2);
  printf("The average of the sum of the squares %f\n",(float)(m*m+n*n)/2);
  return 0;
}
