//Mac-OS
//shritik jaiswal
//ROLL-21BT30026
//Sec- 3
#include <stdio.h>
int min(int a,int b)
{
  if(a<b)
  {
    return a;
  }
  else{
    return b;
  }
}
int taxi(int income)
{int tax_amt=0;
  if(income>0 && income<=250000)
  {
    tax_amt=0;
  }
  if(income>250000 && income<=500000)
  {
    tax_amt=0.05*(income);
  }
  if(income>500000 && income<=750000)
  {
    tax_amt=12500+(income-500000)*0.1;
  }
  if(income>750000 && income<=1000000)
  {
    tax_amt=37500+(income-750000)*0.15;
  }
  if(income>1000000 && income<=1250000)
  {
    tax_amt=75000+(income-1000000)*0.20;
  }
  if(income>1250000 && income<=1500000)
  {
    tax_amt=125000+(income-1250000)*0.25;
  }
  if(income>1500000 )
  {
    tax_amt=187500+(income-1500000)*0.30;
  }
return tax_amt;
}
int main()
{
  int ms,hl,lic,mi,yi,tax;
  printf("Enter your monthly salary: ");
  scanf("%d",&ms);
  printf("\nEnter your house loan : ");
  scanf("%d",&hl);
  printf("\nEnter your life insurance premium : ");
  scanf("%d",&lic);
  printf("\nEnter your medical income :");
  scanf("%d",&mi);
  int final_tax=0;
  int income=ms*12;
  if (income<1000000)
  {
      final_tax=taxi(ms*12);
      printf("Tax=%d",final_tax);
  }
  else
  {
     income=income-min(hl,250000)-min(lic,150000)-min(mi,50000);
     final_tax=taxi(income);
     printf("Tax=%d",final_tax);
  }

    
return 0;
}
