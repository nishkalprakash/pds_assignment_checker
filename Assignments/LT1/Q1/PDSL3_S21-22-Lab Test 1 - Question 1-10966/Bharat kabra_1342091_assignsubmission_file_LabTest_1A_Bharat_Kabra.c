/*
Name- Bharat Kabra
Roll: 21CH10015
Dept: Chemical
Package: Codeblocks
Lab Test: 1
*/
#include <stdio.h>

int main()
{
    int ms,hl,li,mi,fyi,it;
    printf("Monthly salary = \n");
    scanf("%d", &ms);
     printf("house loan = \n");
    scanf("%d" ,&hl);
     printf("life insurance premium =\n");
    scanf("%d" ,&li);
    printf("medical insurance = \n");
    scanf("%d" ,&mi);
    fyi=(ms*12 - (hl+li+mi));
    if(fyi>=0 && fyi<=250000)
    it=0;
    else if(fyi>=250001&& fyi<=500000)
    it =0.05*fyi;
    else if(fyi>=500001 && fyi<=750000)
    it =12500+0.1*(fyi);
    else if(fyi>=750001 && fyi<=1000000)
    it =37500+0.15*(fyi);
    else if(fyi>= 1000001 && fyi<= 1250000)
    it =75000+0.2*(fyi);
    else if(fyi>=1250001 && fyi<= 1500000)
    it =125000+0.25*(fyi);
    else if(fyi>1500000)
    it =187500+0.3*(fyi);
    printf("Total tax: %d",it);


    return 0;
}
