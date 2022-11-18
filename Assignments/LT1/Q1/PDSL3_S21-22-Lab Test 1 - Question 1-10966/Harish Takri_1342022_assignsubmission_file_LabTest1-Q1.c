/*
Name - Harish Takri
Dept - Chemistry
Roll no - 21CY10016
Package - Code Blocks
Operating System - Windows
*/
#include<stdio.h>
int main(){
    int month_I,year_I,tax,H_L,lic,med;
    float total_tax;
    printf("Enter the Monthly income : ");
    scanf("%d",&month_I);
    year_I=month_I*12;
    printf("Enter the House loan : ");
    scanf("%d",&H_L);
    printf("Enter the lic premium : ");
    scanf("%d",&lic);
    printf("Enter the Medical Insurance : ");
    scanf("%d",&med);
    if(year_I<250000){
        printf("NO tax to be paid : ");
    }
    else if (year_I<500000 && year_I>250000){
        tax=(0.05*year_I);
        total_tax=tax-(H_L+lic+med);
        printf("The total tax to be paid is : %f ",total_tax);
    }
    else if (year_I<750000 && year_I>500000){
             tax=(0.1*year_I);
        total_tax=tax-(H_L+lic+med)+12500;
        printf("The total tax to be paid is : %f ",total_tax);

    }
    else if (year_I<1000000 && year_I>750000){
        tax=(0.15*year_I);
        total_tax=tax-(H_L+lic+med)+37500;
        printf("The total tax to be paid is : %f ",total_tax);
    }
    else if (year_I<1250000 && year_I>1000000){
        tax=(0.2*year_I);
        total_tax=tax+75000;
        printf("The total tax to be paid is : %f ",total_tax);
    }
    else if (year_I<1500000 && year_I>1250000){
        tax=(0.25*year_I);
        total_tax=tax+125000;
        printf("The total tax to be paid is : %f ",total_tax);
    }
    else if (year_I>1500000) {
        tax=(0.3*year_I);
        total_tax=tax+187500;
        printf("The total tax to be paid is : %f ",total_tax);
    }

}
