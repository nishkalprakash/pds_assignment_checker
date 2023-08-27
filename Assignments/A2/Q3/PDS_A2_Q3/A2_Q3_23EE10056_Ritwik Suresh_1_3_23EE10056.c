//Roll no. : 23EE10056//
//Name : Ritwik Suresh //
#include<stdio.h>
int main()
{
  unsigned int P,T ;
  float  SI,amount,R ;
  printf("Enter the value of the principal amount and the time period of the fixed deposit:\n");
  scanf("%d %d",&P,&T);
  printf("Enter the value of rate of interest in percentage:\n");
  scanf("%f",&R);
  SI = (P*T*R)/100 ;
  amount = P + SI ;
  printf("The total payable amount after the time period of the FD = %5.2f\n",amount);
  return 0 ;
}
  
  
  
  
