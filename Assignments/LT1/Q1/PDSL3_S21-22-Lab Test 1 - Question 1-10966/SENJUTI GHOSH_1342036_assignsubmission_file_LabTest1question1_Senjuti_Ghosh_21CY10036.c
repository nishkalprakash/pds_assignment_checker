/*
name:SENJUTI GHOSH
ROLL:21CY10036
DEPT:Chemistry
Package:CODEBLOCKS
*/
#include<stdio.h>
int main(){
double monthly_salary,yearly_income,house_loan,life_insurance_premium,medical_insurance,tax;
printf("Monthly salary: ");
scanf("%lf",&monthly_salary);
yearly_income=monthly_salary*12;
printf("house loan: ");
scanf("%lf",&house_loan);
printf("Medical insurance premium: ");
scanf("%lf",&medical_insurance);
printf("life insurance premium");
scanf("%lf",&life_insurance_premium);
if (yearly_income>=10000){
    if (house_loan>250000){
        yearly_income-=250000;}
    else{
         yearly_income-=house_loan;}
    if (medical_insurance>50000){
        yearly_income-=50000;}
    else{
         yearly_income-=medical_insurance;}
    if (life_insurance_premium>150000){
         yearly_income-=150000;}
    else{
         yearly_income-=life_insurance_premium;}
}

if ((yearly_income>=0)&&(yearly_income<=250000)){
    tax=0;
}
else if ((yearly_income>=250001)&&(yearly_income<=500000)){
        tax=yearly_income*0.05;}
else if ((yearly_income>=500001)&&(yearly_income<=750000)){
         tax=12500+(yearly_income-500000)*0.1;}
else if ((yearly_income>=7500001)&&(yearly_income<=1000000)){
         tax=37500+(yearly_income-750000)*0.15;}
else if ((yearly_income>=1000001)&&(yearly_income<=1250000)){
         tax=75000+(yearly_income-1000000)*0.2;}
else if ((yearly_income>=1250001)&&(yearly_income<=1500000)){
         tax=125000+(yearly_income-1250000)*0.25;}
else if (yearly_income>1500000){
         tax=187500+(yearly_income-1500000)*0.3;}
printf("Tax:%lf",tax);
return 0;
}
