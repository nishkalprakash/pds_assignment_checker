/*
Name: Indra Kumar Gupta
Roll: 21AE10043
Department: Aerospace Engineering
Package: CodeBlocks
Operating system: Windows
*/

//Lab Test 1 Question 1

#include <stdio.h>
int main(){
float monthly_salary, house_loan=0, life_insurance=0, medical_insurance=0, annual_salary, amount, tax;

printf("Enter monthly salary=");
scanf("%f", &monthly_salary);

printf("Enter annual house loan=");
scanf("%f", &house_loan);

printf("Enter annual life insurance premium=");
scanf("%f", &life_insurance);

printf("Enter annual medical insurance=");
scanf("%f", &medical_insurance);
if(house_loan>250000){
    house_loan=0;
}
if(life_insurance>150000){
    life_insurance=0;
}
if(medical_insurance>50000){
    medical_insurance=0;
}
amount = (12*monthly_salary)-(house_loan+life_insurance+medical_insurance);

if(amount>=0 && amount<=250000){
printf("Total Tax: Nil");

}else if(amount>=250001 && amount<=500000){
printf("Total Tax: %.2f", 0.05*amount);
}else if(amount>=500001 && amount<=750000){

printf("Total Tax: %.2f", 12500+(0.1*(amount-500000)));
}else if(amount>=750001 && amount<=1000000){
printf("Total Tax: %.2f", 37500+(0.15*(amount-750000)));
}else if(amount>=1000001 && amount<=1250000){
printf("Total Tax: %.2f", 75000+(0.2*(amount-1000000)));
}else if(amount>=1250001 && amount<=1500000){
printf("Total Tax: %.2f", 125000+(0.25*(amount-1250000)));
}else if(amount>1500000){
printf("Total Tax: %.2f", 187500+(0.3*(amount-1500000)));
}



return 0;
}
