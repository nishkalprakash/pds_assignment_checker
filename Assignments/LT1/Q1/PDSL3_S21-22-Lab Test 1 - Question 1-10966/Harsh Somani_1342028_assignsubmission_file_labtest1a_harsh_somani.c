/*NAME HARSH SOMANI
SECTION 3
ROLL NUMBER 21EC10031
ASSIGNMENT CLASS 6
DEPT ECE*/
#include<stdio.h>
int main()
{
    float i_m,hl,li,mi;
    float tax;
    scanf("%f%f%f%f",&i_m,&hl,&li,&mi);
    printf("income per month is %f\n",i_m);
    printf("yearly house loan is %f\n",hl);
    printf("yearly life insurance is %f\n",li);
    printf("yearly medical insurance is %f\n",mi);
    i_m=i_m*12;
    printf("yearly income %f\n",i_m);
    if(i_m>1000000)
    {
        if(hl<=250000) i_m=i_m-hl;
        else i_m=i_m-250000;
        if(li<=150000) i_m=i_m-li;
        else i_m=i_m-150000;
        if(mi<=50000) i_m=i_m-mi;
        else i_m=i_m-50000;
    }
        printf("%f\n",i_m);
        if (i_m<=250000&&i_m>=0)
            tax=0;
        else if (i_m>=250001&&i_m<=500000)
            tax=0.05*i_m;
        else if (i_m>=500001&&i_m<=750000)
            tax=12500+0.1*(i_m-500000);
        else if (i_m>=750001&&i_m<=1000000)
            tax=37500.0+0.15*(i_m-750000);
        else if (i_m>=1000001&&i_m<=1250000)
            tax=75000+0.2*(i_m-1000000);
        else if (i_m>=1250001&&i_m<=1500000)
            tax=125000+0.25*(i_m-1250000);
        else if (i_m>=1500001)
            tax=187500+0.3*(i_m-1500000);

printf("tax to be paid %f",tax);
/*if the taxable amt is 850000 the tax should be 52500
in the output of the pdf the tax = 37500+850000*0.15 is done
(this is a specific ag for 850000)
but shouldn't it be 37500+100000*0.15 */
}
