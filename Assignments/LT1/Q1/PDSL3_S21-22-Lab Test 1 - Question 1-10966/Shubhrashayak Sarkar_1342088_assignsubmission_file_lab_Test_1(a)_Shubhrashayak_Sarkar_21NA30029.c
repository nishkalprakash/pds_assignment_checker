/*Name:- Shubhrashayak Sarkar;
Roll No:- 21NA30029
Package:- Visual Studio Code 
Assignment class:- 6
*/
#include<stdio.h>


/************ Sir I couldn't understand what to print if the maximum allowed house loan and others are exceeded and I also didn't understand what to do in the part
 'certain types of investments are considered are tax-free for minimum yearly Income of Rs. 1000000***********/


int main()
{
    float salary, premium, houseLoan, medical, IncomeTax, LifeInsurance;
    printf("Enter your monthly salary\n");
    scanf("%f", &salary);
    salary=salary*12;
    printf("How much house loan do you pay yearly?(Enter 0 if you pay none)\n");
    scanf("%f", &houseLoan);
    printf("How much life insurance premium do you pay yearly?(Enter 0 if you pay none)\n");
    scanf("%f", &LifeInsurance);
    printf("How much medical bill do you pay yearly?(Enter 0 if you pay none)\n");
    scanf("%f", &medical);
    salary=salary-(LifeInsurance+houseLoan+medical);
    if ((int)salary<=250000)
    {
        IncomeTax=0;
    }
    else if (((int)salary>250000)&&((int)salary<=500000))
    {
        IncomeTax=(salary/20);
    }
    else if (((int)salary>500000)&&((int)salary<=750000))
    {
        IncomeTax=((salary/10)+12500);
    }
    else if (((int)salary>750000)&&((int)salary<=1000000))
    {
        IncomeTax=(salary*15/100)+37500;
    }
    else if (((int)salary>1000000)&&((int)salary<=1250000))
    {
        IncomeTax=(salary/5)+75000;
    }
    else if (((int)salary>1250000)&&((int)salary<=1500000))
    {
        IncomeTax=(salary/4)+125000;
    }
    else if ((int)salary>1500000)
    {
        IncomeTax=(salary*30/100)+187500;
    }
    printf("%f\n", salary);
    printf("%f\n", IncomeTax);
    printf("Your Income Tax is %d\n", (int)IncomeTax);
    return 0;
}