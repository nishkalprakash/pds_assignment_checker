//Name:Shrey G Patel
//Roll no:23CS10051
//The deposit interest problem


#include <stdio.h>
int main()

{

unsigned int amount,period;

float rate,total;

   printf("Enter the amount to be deposited as FD:");

   scanf("%d",&amount);

   printf("Enter the period deposit is made (in year):");

   scanf("%d",&period);

   printf("Enter the interest rate (in percentage):");

   scanf("%f",&rate);

   total=amount+amount*rate*period/100;

   printf("The total amount to be returned is %.4f: \n",total);    //Truncated to four decimal places

return 0;

}



