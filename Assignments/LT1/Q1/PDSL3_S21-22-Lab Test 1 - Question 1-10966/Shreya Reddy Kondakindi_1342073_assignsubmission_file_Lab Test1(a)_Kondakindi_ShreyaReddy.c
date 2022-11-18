/*Name:Kondakindi Shreya Reddy
Roll number:21CE10032
Package:CodeBlocks
Operating system:Windows*/
#include<stdio.h>
#define MIN_INCOME1 250001
#define MAX_INCOME1 500000
#define TAX_RATE1 0.5
#define MIN_INCOME2 500001
#define MAX_INCOME2 750000
#define TAX_RATE2 0.10
#define MIN_INCOME3 750001
#define MAX_INCOME3 1000000
#define TAX_RATE3 0.15
#define MIN_INCOME4 1000001
#define MAX_INCOME4 1250000
#define TAX_RATE4 0.20
#define MIN_INCOME5 1250001
#define MAX_INCOME5 1500000
#define TAX_RATE5 0.25
#define MIN_INCOME6 1500001
#define TAX_RATE6 0.30
int main(){
    double income,hl,lip,mi,taxable_income,tax;//hl=house loan,lip=life insurance premium,mi=medical insurance
    printf(" \n Enter the monthly salary:");
    scanf("%lf",&income);
     printf(" \n Enter the house loan:");
    scanf("%lf",&hl);
     printf(" \n Enter the insurance premium:");
    scanf("%lf",&lip);
     printf(" \n Enter the medical insurance:");
    scanf("%lf",&mi);
    income=income*12;
    taxable_income=income-250000;
    if(taxable_income<=1000000){
        if(hl<=250000){
            income=income-hl;
        }
        if(lip<=150000){
            income=income-lip;
        }
        if(mi<=50000){
            income=income-mi;
        }
        if(taxable_income<=MIN_INCOME1){
            printf("no tax");
        }
        else if((taxable_income>=MIN_INCOME2)&&(taxable_income<=MAX_INCOME2)){
            tax=(taxable_income-MIN_INCOME2)*TAX_RATE2+12500;
            printf("\n TAX=%lf",tax);
        }
        else if((taxable_income>=MIN_INCOME3)&&(taxable_income<=MAX_INCOME3)){
            tax=(taxable_income-MIN_INCOME3)*TAX_RATE3+37500;
            printf("\n TAX=%lf",tax);
        }
        else if((taxable_income>=MIN_INCOME4)&&(taxable_income<=MAX_INCOME4)){
            tax=(taxable_income-MIN_INCOME4)*TAX_RATE4+75000;
            printf("\n TAX=%lf",tax);
        }
        else if((taxable_income>=MIN_INCOME5)&&(taxable_income<=MAX_INCOME5)){
            tax=(taxable_income-MIN_INCOME5)*TAX_RATE5+125000;
            printf("\n TAX=%lf",tax);
        }
        else {
                    tax=(taxable_income-MIN_INCOME6)*TAX_RATE6+187500;
                    printf("\n TAX=%lf",tax);
        }
        return 0;
    }

}
