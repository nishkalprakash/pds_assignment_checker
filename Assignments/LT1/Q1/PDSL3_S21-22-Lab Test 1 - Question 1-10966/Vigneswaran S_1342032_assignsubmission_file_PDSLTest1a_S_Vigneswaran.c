/*Name- S Vigneswaran
Roll No- 21AE30020
Dept:Aerospace Engg Dual degree
package:codeblocks
operating system: Windows 10
Sec 3*/

#include<stdio.h>

int main(){
 unsigned long int msal,sal,loan,lifins,medins;
 float tax;
 printf("Enter monthly salary,house loan,life insurance premium,med ins premium");
 scanf("%lu%lu%lu%lu",&msal,&loan,&lifins,&medins);
 sal=msal*12;
 printf("yearly income is %lu",sal);
 if (sal>1000000){
    if (loan<250001) sal-=loan;
    if (lifins<150001) sal-=lifins;
    if (medins<50001) sal-=medins;
 }
 if (sal < 250001) tax=0;
   else if (sal<500001) tax=0.05*sal;
       else if (sal<750001) tax=0.1*sal+12500.0;
            else if (sal<1000001) tax=0.15*sal+37500.0;
                 else if (sal<1250001) tax=0.2*sal+75000.0;
                        else if (sal<1500001) tax=0.25*sal+125000.0;
                              else tax=0.3*sal+187500.0;
 printf("\nTotal tax =%.0f",tax);
}
