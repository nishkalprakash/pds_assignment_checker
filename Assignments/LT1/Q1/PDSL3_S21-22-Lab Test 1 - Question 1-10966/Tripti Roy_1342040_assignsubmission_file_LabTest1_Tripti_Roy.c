# include<stdio.h>
int main(){
    int monthly_salary, house_loan, life_insurance, medical_insurance, EffSalary, tax=0;
    printf("Enter your monthly salary: \n");
    scanf("%d", &monthly_salary);
    printf("Enter your yearly house loan paid: \n");
    scanf("%d", &house_loan);
    printf("Enter your yearly life insurance premium paid: \n");
    scanf("%d", &life_insurance);
    printf("Enter your yearly medical insurance paid: \n");
    scanf("%d", &medical_insurance);
    EffSalary = (monthly_salary*12) - (house_loan + life_insurance + medical_insurance);
    printf("EffSalary: %d\n", EffSalary);
    if(EffSalary>=0 && EffSalary<=250000){
        tax=0;
    }
    else if(EffSalary>=250001 && EffSalary<=500000){
        tax=tax+0.05*(EffSalary);
    }
    else if(EffSalary>=500001 && EffSalary<=750000){
        tax=tax+12500+0.1*(EffSalary-500000);
    }
    else if(EffSalary>=750001 && EffSalary<=1000000){
        tax=tax+37500+0.15*(EffSalary-750000);
    }
    else if(EffSalary>=1000001 && EffSalary<=1250000){
        tax=tax+75000+0.2*(EffSalary-1000000);
    }
    else if(EffSalary>=1250000 && EffSalary<=1500000){
        tax=tax+125000+0.25*(EffSalary-1250000);
    }
    else{
        tax=tax+187500+0.3*(EffSalary-1500000);
    }
    printf("Total Tax= %d\n", tax);

    return 0;
}
