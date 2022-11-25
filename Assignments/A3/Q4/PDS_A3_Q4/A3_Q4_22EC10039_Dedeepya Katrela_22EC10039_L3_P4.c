#include<stdio.h>
int main()
{
  float total_units,p,total_amount,a=50.00;
  
  printf("enter the value total units:");
  scanf("%f",&total_units);

 if(total_units==100)
 {
   p=a;
 }
 else if(total_units-100<=100)
 {
   p=a+(0.75)*(total_units-100);
 }
 else if(total_units-200<=100)
 {
   p=a+0.75*100+(total_units-200)*1.20;
 }
  else 
 {
   p=a+0.75*100+100*1.20+(total_units-300)*(1.50);
 }
  total_amount=p+p*(0.2);
  printf("your total amount is:%f\n",total_amount);
  return 0;

}
     

