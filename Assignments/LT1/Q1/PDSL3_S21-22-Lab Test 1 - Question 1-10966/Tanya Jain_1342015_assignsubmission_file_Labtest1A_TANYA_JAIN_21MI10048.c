#include <stdio.h>
int main()
{
  int salary,house,life,medical,ysalary,taxslab,tax;
  printf("Enter monthly salary:");
  scanf("%d",&salary);
  ysalary=salary*12;
  printf("\nEnter Yearly house loan(max=250000):");
  scanf("%d",&house);
  printf("\nEnter yearly life insurance(max=150000):");
  scanf("%d",&life);
  printf("\nEnter yearly medical insurance(max=50000):");
  scanf("%d",&medical);
  taxslab=ysalary-house-life-medical;
  if(taxslab<=250000){
  tax=0;
  }
  if((taxslab>250000)&&(taxslab<=500000)){
  tax=((taxslab*5)/100);
  }
  if((taxslab>500000)&&(taxslab<=750000)){
  tax=12500+((taxslab*10)/100);
  }
  if((taxslab>750000)&&(taxslab<=1000000)){
  tax=37500+((taxslab*15)/100);
  }
  if((taxslab>1000000)&&(taxslab<=1250000)){
  tax=75000+((taxslab*20)/100);
  }
  if((taxslab>1250000)&&(taxslab<=1500000)){
  tax=125000+((taxslab*25)/100);
  }
  if(taxslab>1500000){
  tax=187500+((taxslab*30)/100);
  }
  printf("\nTax=%dRs",tax);
  return 0;
}
