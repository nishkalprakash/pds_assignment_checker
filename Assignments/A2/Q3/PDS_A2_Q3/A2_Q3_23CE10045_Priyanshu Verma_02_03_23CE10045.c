//Roll No.:23CE10045
//Name:PRIYANSHU VERMA




#include <stdio.h>

int main()
{

  unsigned int a;
  unsigned int b;
  float c;
  float d;
  
  printf("Enter deposit amount: \n");
  scanf ("%d", &a);
  printf("Enter Period of deposite(In years): \n");
  scanf("%d", &b);
  printf("Enter interest rate (In Percentage): \n");
  scanf ("%f", &c);
  d = a + (a*b*c)/100;

  printf("Total amount payable:%f", d);

  return 0;
}
