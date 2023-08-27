//Roll no:23HS10030
//Name:Lokesh Nitin Ingale
#include<stdio.h>
int main ()
{
  int amount,years;
  float interest,payableamount;
  printf("Enter amount to be deposited");
  scanf("%d",&amount);
  printf("Enter number of years to be deposited for");
  scanf("%d",&years);
  printf("Enter applicable interest");
  scanf("%f",&interest);
  payableamount=(amount*years*interest/100)+amount;
  printf("payable amount is %f",payableamount);
  return 0;
}
	 
	
    
	
