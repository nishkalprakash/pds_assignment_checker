//Roll No.: 23CS30029
//Name: Kshetrimayum Abo

#include<stdio.h>
int main()
{
  int m,n;
  printf("Enter two integer values : "); //Taking integer inputs from the user
  scanf("%d%d",&m,&n);
  printf("The sum(%d+%d) is %d\n",m,n,m+n);  //Printing the computed sum
  printf("The difference(%d-%d) is %d\n",m,n,m-n);  //Printing the computed difference
  printf("The product(%d*%d) is %d\n",m,n,m*n);  //Printing the computed product
  printf("The integer quotient(%d/%d) is %d\n",m,n,(int)(m/n));  //Printing the computed integer quotient
  printf("The integer remainder(%d/%d) is %d\n",m,n,m%n);  //Printing the computed remainder
  printf("The floating point quotient(%d/%d) is %f\n",m,n,(float)m/n);  //Printing the computed floating point quotient
  printf("The sum of the squares(%d^2+%d^2) is %d\n",m,n,m*m+n*n);  //Printing the computed sum of squares
  printf("The square of the sum((%d+%d)^2) is %d\n",m,n,(m+n)*(m+n));  //Printing the computed square of sum
  printf("The average as a floating point number((%d+%d)/2)  is %f\n",m,n,(m+n)/2.0);  //Printing the computed average as floating point number 
  printf("The average of the sum of the squares((%d^2+%d^2)/2) is %f\n",m,n,(m*m+n*n)/2.0);  //Printing the computed average of sum of squares
  return 0;
}
