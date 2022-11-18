/*name: Adicherla Vaibhav
  rollno: 21BT10002
  Department: Biotechnology and Biochemistry Btech
  package: code blocks
  OS: windows*/

#include<stdio.h>
int main()
{
    long int inc,houseL, lifeIn, medIn,monthinc,tax;


    printf("Monthly Salary: ");
    scanf("%ld",&monthinc);

     printf("house loan: ");
     scanf("%ld",&houseL);
     printf("life insurance: ");
     scanf("%ld",&lifeIn);
     printf("medical insurance: ");
     scanf("%ld",&medIn);

   inc = monthinc*12;

     if (inc<=250000)
     {
         printf("Total Tax: 0");
     }
     else if (250000<inc<=500000||inc-medIn-lifeIn-houseL>250000)
     {
         tax = 0.05*(inc-medIn-lifeIn-houseL);
         printf("Total Tax:%ld", tax);
     }
     else if (500000<inc<=750000||inc-medIn-lifeIn-houseL>500000)
     {
         tax = 12500 + 0.1*(inc-medIn-lifeIn-houseL - 500000);
         printf("Total tax: %f",tax);
     }
     else if(750000<inc<=1000000||inc-medIn-lifeIn-houseL>750000)
     {
         tax = 37500 + 0.15*(inc-medIn-lifeIn-houseL - 750000);
         printf("Total tax: %ld",tax);

     }
     else if(1000000<(inc)<=1250000,inc-medIn-lifeIn-houseL>1000000)
     {
         tax = 75000+ 0.2*(inc-1000000- medIn - lifeIn -houseL);
         printf("Total Tax: %ld",tax);

     }
     else if(1250000<(inc)<=1500000||inc-medIn-lifeIn-houseL>1250000)
     {
         tax = 125000+ 0.25*(inc-1250000- medIn - lifeIn -houseL);
         printf("Total Tax: %ld",tax);
     }
      else if((inc)>1500000||inc-medIn-lifeIn-houseL>1500000)
     {
         tax = 187500+ 0.3*(inc-1500000- medIn - lifeIn -houseL);
         printf("Total Tax: %ld",tax);
     }

    return 0;
}
