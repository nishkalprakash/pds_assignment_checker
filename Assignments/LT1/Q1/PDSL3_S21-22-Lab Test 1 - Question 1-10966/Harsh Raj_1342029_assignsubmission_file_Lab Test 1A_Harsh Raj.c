#include<stdio.h>
/* Harsh Raj */
/* Roll: 21IE10017 */
int main()
{
    float mi,yi,tax,hi,hl,lip;
    printf("Monthly Salary =");
    scanf("%f",&mi);
    printf("House Loan =");
    scanf("%f",&hl);
    printf("Life Insurance Policy =");
    scanf("%f",&lip);
    printf("Medical Insurance =");
    scanf("%f",&hi);
    yi=mi*12;
    if(yi>1000000)
    {
        if(hl<=250000)
            yi=yi-hl;
        else
            yi=yi-250000;
        if(lip<=150000)
            yi=yi-lip;
        else
            yi=yi-150000;
        if(hi<=50000)
            yi=yi-hi;
        else
            yi=yi-50000;
    }
    if(yi<250001)
        tax=0;
    if(yi>250000&&yi<500001)
        tax=yi*0.05;
    if(yi>500000&&yi<750001)
        tax=12500+yi*0.1;
    if(yi>750000&&yi<1000001)
        tax=37500+yi*0.15;
    if(yi>1000000&&yi<1250001)
        tax=75000+yi*0.2;
    if(yi>1250000&&yi<1500001)
        tax=125000+yi*0.25;
    if(yi>1500000)
        tax=187500+yi*0.3;
    printf("Total tax: %f",tax);
    return 0;
}
/* Harsh Raj */
/* Roll: 21IE10017 */
