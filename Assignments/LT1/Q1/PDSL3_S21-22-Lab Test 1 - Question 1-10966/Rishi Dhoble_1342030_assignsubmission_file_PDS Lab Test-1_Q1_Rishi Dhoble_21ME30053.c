/*
Name- Rishi Dhoble
Dept- Mechanical Engnn
Roll no- 21ME30053
Section- 3
package- code blocks
*/

#include <stdio.h>

int main(){

    long int salary, annual_salary, house_loan, life_insurance, medical_insurance, taxable, tax;

    printf("Enter monthly salary: ");                                                                  //monthly salary
    scanf("%lu", &salary);

    printf("House loan: ");                                                                            //house loan amt.
    scanf("%lu", &house_loan);

    printf("Life Insurance: ");                                                                        //insurance amt.
    scanf("%lu", &life_insurance);

    printf("Medical Insurance: ");                                                                     // medical insurance amt.
    scanf("%lu", &medical_insurance);

    taxable = salary * 12;                                                                             // annual income

    if (taxable > 1000000){

        if (house_loan > 250000) {
            taxable -= 250000;
        }
        else {
            taxable -= house_loan;
        }

        if (life_insurance > 150000){
            taxable -= 150000;
        }
        else{
            taxable -= life_insurance;
        }

        if (medical_insurance > 50000){
            taxable -= 50000;
        }
        else{
            taxable -= medical_insurance;
        }
    }

    printf("taxable: %lu",taxable);                                                                        // final taxable amt. after removing loans

    if(taxable<=250000){                                                                                   // checking for suitable tax brackets
        tax=0;
    }

    else if(taxable>250000 && taxable<=500000){
        tax=5*taxable/100;
    }

    else if(taxable>500000 && taxable<=750000){
        tax=12500+taxable/10;
    }

    else if(taxable>750000 && taxable<=1000000){
        tax=37500+15*taxable/100;
    }

    else if(taxable>1000000 && taxable<=1250000){
        tax=75000+2*taxable/10;
    }

    else if(taxable>1250000 && taxable<=1500000){
        tax=125000+25*taxable/100;
    }

    else{
        tax=187500+3*taxable/10;
    }

    printf("\nTotal Tax: %lu\n",tax);                                                                     // final total tax

    return 0;
}





