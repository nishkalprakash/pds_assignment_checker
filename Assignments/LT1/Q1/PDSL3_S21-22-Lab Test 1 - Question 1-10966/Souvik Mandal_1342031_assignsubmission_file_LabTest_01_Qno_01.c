/*
Name : Souvik Mandal
Roll No. : 21MF10036
Section : 3 
Group : 5
Department : Manufacturing Science And ENGG.
Package : VS Code
Operating System : Windows
*/

#include <stdio.h>

int main() {

    int ms , hl , ip , mi;

    float tax;

    printf("Monthly salary : ");
    scanf("%d",&ms);

    printf("House loan : ");
    scanf("%d",&hl);

    printf("Life insurance premium : ");
    scanf("%d",&ip);
    
    printf("Medical insurance : ");
    scanf("%d",&mi);
    
    float extra , final ;

    extra=hl + ip + mi;

    final=(12*ms)-extra;

    if(final<=250000)
    {
        tax=0;
    }

    else if(final>250000 && final<=500000)
    {
        tax=0.05*final;
    }
    
    else if(final>500000 && final<=750000)
    {
        tax=12500+(0.10*(final-500000));
    }

    else if(final>750000 && final<=1000000)
    {
        tax=37500+(0.15*(final-750000));
    }
    
    else if(final>1000000 && final<=1250000)
    {
        tax=75000+(0.25*(final-1000000));
    }

    else if(final>1250000 && final<=1500000)
    {
        tax=125000+(0.25*(final-1250000));
    }
   
   else
   {
       tax=187500+(0.30*(final-1500000));
   }

    printf("Total Tax : %lf",tax);
}