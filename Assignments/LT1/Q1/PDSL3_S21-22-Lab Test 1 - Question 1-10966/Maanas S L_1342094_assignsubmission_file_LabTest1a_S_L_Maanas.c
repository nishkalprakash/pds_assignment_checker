/*
Name : S L Maanas
Roll No : 21CH10055
Department : Chemical Engineering
Package : VS Code
Assignment : Lab Test 1(a)
*/

#include<stdio.h>
int main()
{
    int msallu,mkc,kishte,lickabharosa,apollo;
    float kamaigayi;
    printf("Monthly salary :");
    scanf("%d",&msallu);
    printf("Yearly house loan paid (0 for none) :");
    scanf("%d",&kishte);
    printf("Yearly life insurance premium (0 for none) :");
    scanf("%d",&lickabharosa);
    printf("Yearly medical insurance premium (0 for none) :");
    scanf("%d",&apollo);
    mkc=12*msallu;
    if(mkc > 1000000)
    {
        if(kishte < 250000)
            mkc -= kishte;
        else
            mkc -= 250000;
        if(lickabharosa<150000)
            mkc -= lickabharosa;
        else
            mkc -= 150000;
        if(apollo < 50000)
            mkc -= apollo;
        else
            mkc-=50000;
    }
    if (mkc>=0 && mkc<=250000)
    {
        kamaigayi=0;
    }
    else if (mkc>=250001 && mkc<=500000)
    {
        kamaigayi=0.05*(mkc-250000);
    }
    else if (mkc>=500001 && mkc<=750000)
    {
        kamaigayi=12500+0.1*(mkc-500000);
    }
    else if (mkc>=750001 && mkc<=1000000)
    {
        kamaigayi=37500+0.15*(mkc-750000);
    }
    else if (mkc>=1000001 && mkc<=1250000)
    {
        kamaigayi=75000+0.2*(mkc-1000000);
    }
    else if (mkc>=1250001 && mkc<=1500000)
    {
        kamaigayi=125000+0.25*(mkc-1250000);
    }
    else if (mkc >= 1500000)
    {
        kamaigayi = 187500+0.3*(mkc - 1500000);
    }
    printf("\ntotal tax:%.0f\n",kamaigayi);
    return 0;
}