//Roll no. 23MA10036
//Name: Nayandeep Deb

#include <stdio.h>

int main(){
  unsigned int deposit, time;
  float interest;
  printf("Deposit amount: ");
  scanf("%i",&deposit);
  printf("Duration(in years): ");
  scanf("%i",&time);
  printf("Interest rate(in percentage): "); //promting user for deposit, time and interest rate
  scanf("%f", &interest);
  interest /= 100;
  float amount = (deposit * interest * time); //extra interest amount payable
  printf("Total payable amount: %f\n", deposit+amount);
}
