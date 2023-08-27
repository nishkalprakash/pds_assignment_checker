//Roll No.: 23ME30039
//Name : PILLI ASISH CHANDAN

#include<stdio.h>
#include<math.h>

int main() {
  int deposit;
  printf(" enter the deposit amount " );
  scanf("%d", &deposit);
  int period;
  printf(" enter the period of deposit in years ");
  scanf("%d", &period);
  float interest_rate;
  printf("enter interest_rate ");
  scanf("%f", &interest_rate);

  printf("your total payable amount after the period is %f ",  deposit*period*interest_rate/100 + deposit);
  return(0);

}
