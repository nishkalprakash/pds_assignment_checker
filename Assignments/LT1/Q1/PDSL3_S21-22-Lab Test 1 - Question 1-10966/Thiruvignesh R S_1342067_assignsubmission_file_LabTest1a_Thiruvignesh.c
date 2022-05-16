/*
Name: R S Thiruvignesh
Roll no.:21BT10022
Department: Biotechnology 4yr
Package: Code blocks
Operating system: Windows 10 */

#include <stdio.h>

void main(){
    int m_sal,h_loan,l_ins,m_ins;
    int y_sal,income,tax;

    printf("Monthly salary = ");
    scanf("%d",&m_sal);
    printf("House loan = ");
    scanf("%d",&h_loan);
    printf("Life insurance premium = ");
    scanf("%d",&l_ins);
    printf("Medical insurance = ");
    scanf("%d",&m_ins);

    y_sal=12*m_sal;
    printf("Yearly income: %d",y_sal);

    if ((y_sal>=1000000)){
        if (h_loan<=250000&&l_ins<=150000&&m_ins<=50000){
            income=y_sal-h_loan-l_ins-m_ins;
        }
        else if(h_loan>250000){
            income=y_sal+h_loan-250000;
        }
        else if(l_ins>150000){
            income=y_sal+l_ins-150000;
        }
        else if(m_ins>50000){
            income=y_sal+m_ins-50000;
        }
    }
    else{
        income=y_sal+h_loan+l_ins+m_ins;
    }
    printf("income:%d",income);
    if (income>=0&&income<=250000){
        tax=0;
        printf("Total tax: %d",tax);
    }
    if (income>250000&&income<=500000){
        tax=0.5*income;
        printf("Total tax: %d",tax);
    }
    if (income>500000&&income<=750000){
        tax=12500+0.1*(income-500000);
        printf("Total tax: %d",tax);
    }
    if (income>750000&&income<=1000000){
        tax=37500+0.15*(income-750000);
        printf("Total tax: %d",tax);
    }
    if (income>1000000&&income<=1250000){
        tax=75000+0.2*(income-1000000);
        printf("Total tax: %d",tax);
    }
    if (income>1250000&&income<=1500000){
        tax=125000+0.25*(income-1250000);
        printf("Total tax: %d",tax);
    }
    if (income>1500000){
        tax=187500+0.3*(income-1500000);
        printf("Total tax: %d",tax);
    }

}
