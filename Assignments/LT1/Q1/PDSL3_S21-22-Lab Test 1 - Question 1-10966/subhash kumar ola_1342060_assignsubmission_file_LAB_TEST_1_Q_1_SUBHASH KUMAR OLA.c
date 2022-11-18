#include<stdio.h>
int main()
{
    int salary,house_loan,life_insurance,med_insurance,income,i;
    float tax;
    printf("Monthly salary= ");
    scanf("%d",&salary);
    printf("house loan= ");
    scanf("%d",&house_loan);
    printf("life insurance premium= ");
    scanf("%d",&life_insurance);
    printf("medical insurance= ");
    scanf("%d",&med_insurance);

    income=salary*12;
    if(house_loan>250000)house_loan=250000;
    if(med_insurance>50000)med_insurance=50000;
    if(life_insurance>150000)life_insurance=150000;

    if(income>=100000)income=income-house_loan-med_insurance-life_insurance;

    if(income<=250000){
        tax=0;
    }


    if(income<=500000 && income>250000){
        tax=0.05*income;
    }


    if(income<=750000 && income>500000){
        tax=12500 + (0.1)*(income-500000);
    }


    if(income<=1000000 && income>750000){
        tax=37500+ (0.15)*(income-750000);
    }


    if(income<=1250000 && income>1000000){
        tax=75000 + (0.2)*(income-1000000);
    }


    if(income<=1500000 && income>1250000){
        tax= 125000 + (0.25)*(income-1250000);
    }


    if(income>1500000){
        tax= 187500 + (0.3)*(income-1500000);
    }
    printf("Total tax: %5.2f",tax);

    return 0;
}
