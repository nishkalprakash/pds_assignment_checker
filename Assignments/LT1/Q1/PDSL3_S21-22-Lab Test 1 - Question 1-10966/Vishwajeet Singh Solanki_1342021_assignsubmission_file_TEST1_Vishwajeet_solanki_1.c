/*
NAME: VISHWAJEET SINGH SOLANKI
ROLL NO: 21CS10079
DEPT: COMPUTER SCIENCE
PACKAGE: CODEBLOCKS
*/
#include<stdio.h>
#include<math.h>
int main(){
    int Monthly_salary,house_loan,life_insurance_premium,medical_insurance;
    int yearly_taxable_income,k;
    printf("Enter the Monthly salary\n");
    scanf("%d",&Monthly_salary);
     printf("Enter the house_loan\n");
    scanf("%d",&house_loan);
     printf("Enter the life_insurance_premium\n");
    scanf("%d",&life_insurance_premium);
     printf("Enter the medical_insurance\n");
    scanf("%d",&medical_insurance);

    yearly_taxable_income=(((Monthly_salary)*12)-(house_loan)-(life_insurance_premium)-(medical_insurance));

    if (yearly_taxable_income>0 && yearly_taxable_income<250000){
        printf("Tax =Nil");
    }
    if (yearly_taxable_income>250001 && yearly_taxable_income<500000){
            k=(0.05)*(yearly_taxable_income);
        printf("Tax =%d",k);
    }
    if (yearly_taxable_income>500001 && yearly_taxable_income<750000){
        k=12500+(0.1)*(yearly_taxable_income-500000);
        printf("Tax =%d",k);
    }
    if (yearly_taxable_income>750001 && yearly_taxable_income<1000000){
        k=37500+(0.15)*(yearly_taxable_income-750000);
        printf("Tax =%d",k);
    }
    if (yearly_taxable_income>1000001 && yearly_taxable_income<1250000){
        k=75000+(0.2)*(yearly_taxable_income-1000000);
        printf("Tax =%d",k);
    }
    if (yearly_taxable_income>1250000 && yearly_taxable_income<1500000){
        k=125000+(0.25)*(yearly_taxable_income-1250000);
        printf("Tax =%d",k);
    }
    if (yearly_taxable_income>1500000){
        k=187500+(0.3)*(yearly_taxable_income-1500000);
        printf("Tax =%d",k);
    }
    return 0;
}
