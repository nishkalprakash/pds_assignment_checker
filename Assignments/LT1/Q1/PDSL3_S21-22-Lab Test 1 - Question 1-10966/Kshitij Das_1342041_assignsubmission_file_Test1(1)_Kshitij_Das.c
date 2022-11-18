/* Name			: Kshitij Das
   Class No. 	: 2
   Roll No.		: 21CS10039
   Department	: CSE
   Package		: Visual Studio Code
   OS			: MS Windows 11
   */
#include<stdio.h>

int main(void){
    int MS, LIP,MI,HL,YI; /*MS = monthly salary, LIP: life insurance,
                              HL: house loan, MI:medical insurance, YI= yearly income*/
    float tax;
    int total;

    //taking input from user
    printf("Monthly salary =");
    scanf("%d", &MS);
    printf("\nHouse Loan =");
    scanf("%d", &HL);
    printf("\nLife insurance premium =");
    scanf("%d", &LIP);
    printf("\nMedical Insurance =");
    scanf("%d", &MI);
    YI = 12 * MS;
    //deducting investments
    if(YI>= 1000000){
        total = YI - HL - LIP - MI;
        if(HL > 250000){
            total = total + HL - 250000;
        }
        if(LIP > 150000){
            total = total + LIP - 150000;
        }
        if(MI > 50000){
            total = total + MI - 50000;
        }
    }
    if(total <= 250000){
        tax = 0;
    }
    else if(total >= 250001 && total <= 500000){
        tax = 0.05*total;
    }
    else if(total >= 500001 && total <= 750000){
        tax = 12500 + 0.05*total;
    }
    else if(total >= 750001 && total <= 1000000){
        tax = 37500+ 0.15*total;
    }
    else if(total >= 1000001 && total <= 1250000){
        tax = 75000 + 0.2*total;
    }
    else if(total >= 1250001 && total <= 1500000){
        tax = 125000 + 0.25*total;
    }
    else{
        tax = 187500 + 0.3*total;
    }
    printf("\nTotal tax = %.2f", tax);
    return 0;



}