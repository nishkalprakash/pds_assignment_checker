//Name:-Shubham Gajanan Warkad. 
//Roll No.-21ME30072.
//Lab test 1  Question no.1
#include<stdio.h>
int main()
{
int salary,loan,premium,insurance,yearly_salary,Taxable_amt;
float Tax=0;
printf("Enter your Income:");
scanf("%d",&salary);
printf("Enter house loan:");
scanf("%d",&loan);
printf("Enter life insurance premium:");
scanf("%d",&premium);
printf("Enter medical insurance:");
scanf("%d",&insurance);
yearly_salary=12*salary;
if (yearly_salary<=250000){
    printf("Total Tax=0");
}
else if (yearly_salary>250000&&loan<250000&&premium<150000&&insurance<50000){
    Taxable_amt=yearly_salary-loan-premium-insurance;
    if (Taxable_amt<=250000){
        printf("Total Tax=0");
    }
    else if (Taxable_amt>250000&&Taxable_amt<=500000){
        Tax=(Taxable_amt-250000)*0.05;
        printf("Total Tax=%.2f",Tax);
    }
    else if (Taxable_amt>500000&&Taxable_amt<=750000){
        Tax=12500+0.10*(Taxable_amt-500000);
        printf("Total Tax=%.2f",Tax);
    }
    else if (Taxable_amt>750000&&Taxable_amt<=1000000){
        Tax=37500+0.15*(Taxable_amt-750000);
        printf("Total Tax=%.2f",Tax);
    }
    else if (Taxable_amt>1000000&&Taxable_amt<=1250000){
        Tax=75000+0.20*(Taxable_amt-1000000);
        printf("Total Tax=%.2f",Tax);
    }
    else if (Taxable_amt>1250000&&Taxable_amt<=1500000){
        Tax=125000+0.25*(Taxable_amt-1250000);
        printf("Total Tax=%.2f",Tax);
    }
    else if (Taxable_amt>1500000){
        Tax=187500+0.30*(Taxable_amt-1500000);
        printf("Total Tax=%.2f",Tax);
    }

    
}


return 0;
}