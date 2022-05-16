/*chityala raviteja
section 3
dept. -CSE Dual
roll no: 21CS30016
package : online compiler
os- windows 10 */
#include <stdio.h>

int main() {
    int salary,loan,l_insurance,medical,t_salary,i_tax;
    printf("Monthly salary=");
    scanf("%d",&salary);
    printf(",house loan=");
    scanf("%d",&loan);
    printf(",life insurance premium=");
    scanf("%d",&l_insurance);
    printf(",medical=");
    scanf("%d",&medical);
    t_salary=salary*12;
    if (t_salary>=1000000){
        if (loan<250000){
            t_salary-=loan;
        }
        else{
            t_salary-=250000;
        }
        if (l_insurance<150000){
            t_salary-=l_insurance;
        }
        else{
            t_salary-=150000;
        }
        if (medical<50000){
            t_salary-=medical;
        }
        else{
            t_salary-=50000;
        }
    }
    
    if (0<=t_salary && t_salary<=250000){
        i_tax=100;
    }
    else if(250001<=t_salary && t_salary<=500000){
        i_tax=0.05*t_salary;
    }
    else if(500001<=t_salary && t_salary<=750000){
        i_tax=12500+0.1*t_salary;
    }
    else if(750001<=t_salary && t_salary<=1000000){
        i_tax=37500+0.15*t_salary;
    }
    else if(1000001<=t_salary && t_salary<=1250000){
        i_tax=75000+0.2*t_salary;
    }
    else if(1250001<=t_salary && t_salary<=1500000){
        i_tax=125000+0.25*t_salary;
    }
    else if(t_salary>1500000){
        i_tax=187500+0.3*t_salary;
    }
    
    printf("Total tax=%d",i_tax);
return 0;
}