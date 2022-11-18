/*
Name: Shashwata Roy
Roll: 21MA10055
Dept: Maths and Computing
Package: Codeblocks
Assignment class: 4
Test: 1
*/

#include<stdio.h>

int main(){
    double mon,h,l,med,ti,tax;
    printf("Monthly salary: ");
    scanf("%lf",&mon);
    printf("House loan: ");
    scanf("%lf",&h);
    printf("Life insurance premium: ");
    scanf("%lf",&l);
    printf("Medical insurance: ");
    scanf("%lf",&med);
    if(h>250000)
        h=250000;
    if(l>150000)
        l=150000;
    if(med>50000)
        med=50000;
    ti = mon*12-(h+l+med);
    if(ti>=0&&ti<=250000)
        tax=0;
    else if(ti>=250001&&ti<=500000)
        tax=0.05*ti;
    else if(ti>=500001&&ti<=750000)
        tax=12500+0.1*ti;
    else if(ti>=750001&&ti<=1000000)
        tax=37500+0.15*ti;
    else if(ti>=1000001&&ti<=1250000)
        tax=75000+0.2*ti;
    else if(ti>=1250001&&ti<=1500000)
        tax=125000+0.25*ti;
    else
        tax=187500+0.3*ti;
    printf("Total tax: %lf",tax);
return 0;
}
