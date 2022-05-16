/*
Name: Adipta Halder
Roll Number: 21EC30003
Department: EC
Package: CODEBLOCKS
O.S: Windows 10
Assignment Class: 3

Test : 1a
*/
#include<stdio.h>

int main(){
    float msal,h,l,m,ysal,ysal1; //ysal1=raw income of a year , ysal= total yearly taxable income,msal= monthly salary
    printf("Monthly salary = ");
    scanf("%f",&msal);
    printf("House loan = ");
    scanf("%f",&h);
    printf("Life insurance premium = ");
    scanf("%f",&l);
    printf("Medical insurance = ");
    scanf("%f",&m);
    ysal1=msal*12.0;
    if(ysal1>=1000000){
        if(h<=250000){
            ysal1=ysal1-h;
        }
        else{
            ysal1=ysal1-250000;
        }
        if(l<=150000){
            ysal1=ysal1-l;
        }
        else{
            ysal1=ysal1-150000;
        }
        if(m<=50000){
            ysal1=ysal1-m;
        }
        else{
            ysal1=ysal1-50000;
        }
    }
    ysal=ysal1;
    if(ysal>=0&&ysal<=250000){
        printf("\nTotal tax= 0");
    }
    else if(ysal>=250001&&ysal<=500000){
        printf("\nTotal tax= %.2f",(0.05*ysal));
    }
    else if(ysal>=500001&&ysal<=750000){
        printf("\nTotal tax= %.2f",((0.1*ysal)+12500));
    }
    else if(ysal>=750001&&ysal<=1000000){
        printf("\nTotal tax= %.2f",((0.15*ysal)+37500));
    }
    else if(ysal>=1000001&&ysal<=1250000){
        printf("\nTotal tax= %.2f",((0.2*ysal)+75000));
    }
    else if(ysal>=1250001&&ysal<=1500000){
        printf("\nTotal tax= %.2f",((0.25*ysal)+125000));
    }
    else if(ysal>=1500001){
        printf("\nTotal tax= %.2f",((0.3*ysal)+187500));
    }
 return 0;
}
