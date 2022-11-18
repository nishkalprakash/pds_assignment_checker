/*
rakesh tarendra
21MT30031
*/
#include <stdio.h>
int main()
{
    long long int M_income,L_insurance,M_insurance,H_loan;
    printf("Enter monthly income :\n",M_income);
    scanf("%lld",&M_income);
    printf("Enter life insurance :\n",L_insurance);
    scanf("%lld",&L_insurance);
    printf("Enter house loan :\n",H_loan);
    scanf("%lld",&H_loan);
    printf("Enter mmedical insurance :\n",M_insurance);
    scanf("%lld",&M_insurance);
    long long int Tax_amount= 12*M_income-L_insurance-M_insurance-H_loan;
    if(Tax_amount<=250000)
    {
        printf("Totl Tax=0\n");
    }
        if(Tax_amount>250000&&Tax_amount<=500000)
    {
        printf("Totl Tax = %lld\n",0.05*Tax_amount);
    }
   if(Tax_amount>500000&&Tax_amount<= 750000)
    {
        printf("Totl Tax = %lld\n",12500+0.10 *(Tax_amount-500000));
    }
   if(Tax_amount>750000&&Tax_amount<= 100000)
    {
        printf("Totl Tax = %lld\n",37500+0.15 *(Tax_amount-750000));
    }
   if(Tax_amount>100000&&Tax_amount<= 1250000)
    {
        printf("Totl Tax = %lld\n",75000+0.20 *(Tax_amount-100000));
    }
   if(Tax_amount>1250000&&Tax_amount<= 1500000)
    {
        printf("Totl Tax = %lld\n",125000+0.25 *(Tax_amount-1250000));
    }
   if(Tax_amount>1500000)
    {
        printf("Totl Tax = %lld\n",187500+0.30 *( Tax_amount-1500000));

    }


    return 0;
}

