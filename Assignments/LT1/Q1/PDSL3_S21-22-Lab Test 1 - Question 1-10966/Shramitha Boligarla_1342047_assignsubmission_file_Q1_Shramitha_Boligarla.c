/* Shramitha Boligarla
   Roll no: 21ME10024
   LAB TEST 1- Q1
   TAX CALCULATION */

#include<stdio.h>
int main()
{
    int s,house,life,med, Amount, tax;

    printf("Monthly salary=");
    scanf("%d",&s);

    printf("House loan=");
    scanf("%d",&house);

    printf("Life insurance premium=");
    scanf("%d",&life);

    printf("Medical insurance=");
    scanf("%d",&med);


    if (house<=250000 && life<=150000 && med<=50000) {Amount= 12*s - house - life - med;}
        else if (house<=250000 && life<=150000 && med>50000) {Amount= 12*s - house - life - 50000;}
        else if (house<=250000 && med<=50000 && life>150000) {Amount= 12*s - house -150000 - med;}
        else if (life<=150000 && med<=50000 && house>250000) {Amount= 12*s - 250000 - life - med;}
        else if (house<=250000 && life>150000 && med>50000) {Amount= 12*s - house - 150000 - 50000;}
        else if (house>250000 && life<=150000 && med>50000) {Amount= 12*s - 250000 - life - 50000;}
        else if (house>250000 && life>150000 && med<=50000) {Amount= 12*s - 250000 - 150000 - med;}
        else if (house>250000 && life>150000 && med>50000) {Amount= 12*s - 250000 - 150000 - 50000;}


    if (Amount>=0 && Amount<=250000) printf("Total tax=0");
    else if ( Amount<=500000) {tax= Amount*0.05;
                                                printf("Total tax=%d",tax);}
    else if (Amount<=750000) {tax= 12500+ Amount*0.1; printf("Total tax=%d",tax);}
    else if ( Amount<=1000000) {tax= 37500 + Amount*0.15; printf("Total tax=%d",tax);}
    else if (Amount<=1250000) {tax= 75000 + Amount*0.2; printf("Total tax=%d",tax);}
    else if ( Amount<=1500000) {tax= 125000 + Amount*0.25; printf("Total tax=%d",tax); }
    else if (Amount>=1500001) {tax= 187500 + Amount*0.3; printf("Total tax=%d",tax);}

    return (0);

}
