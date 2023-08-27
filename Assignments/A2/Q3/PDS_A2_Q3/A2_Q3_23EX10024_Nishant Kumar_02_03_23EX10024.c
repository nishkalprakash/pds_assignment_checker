//Roll No. 23EX10024
//Name Nishant Kumar
#include<stdio.h>
int main()
{
  int am , time;
  float rate, net;
  printf("Enter the amount time period and rate of interest\n");
  scanf("%d %d %f", &am, &time,&rate);
  net =(am*time*rate)/100 + am;
  printf("The net amount payable is %f",net);
  return 0;
}
  
