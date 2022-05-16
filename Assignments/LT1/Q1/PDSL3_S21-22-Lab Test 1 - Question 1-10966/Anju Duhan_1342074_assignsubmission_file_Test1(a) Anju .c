#include<stdio.h>
main()
{
    int ms,hl,lip,mi,tt;
    printf("Monthly salary=");
    scanf("%d",&ms);             //ms=monthly salary
    printf("House loan=");
    scanf("%d",&hl);
    printf("Life Insurance premium=");
    scanf("%d",&lip);
    printf("Medical insurance=");
    scanf("%d",&mi);
    if(hl<=250000)
    {
        hl=hl;         //hl=House Loan
    }
        else if(hl>250000)
        {
            hl=250000;
        }

    if(lip<=150000)
    {
        lip=lip;      //lip=Life Insurance Premium
    }
        else if(lip>150000)
        {
            lip=150000;
        }

    if(mi<=50000)
    {
        mi=mi;          //mi=Medical Insurance
    }
        else if(mi>250000)
        {
            mi=250000;
        }

int ti=ms*12-hl-lip-mi;  //ti= Yearly Taxable Income

if(ti<=250000)
{
    tt=0;                        //tt=Total Tax
    printf("Total Tax= Nil\n");
}
else if(ti>250001&ti<=500000)
{
    tt=ti*5/100;
}
else if(ti>500001&ti<=750000)
{
    tt=12500+ti*10/100;
}
else if(ti>750001&ti<=1000000)
{
    tt=37500+ti*15/100;
}
else if(ti>1000001&ti<=1250000)
{
    tt=75000+ti*20/100;
}else if(ti>1250001&ti<=1500000)
{
    tt=125000+ti*25/100;
}else if(ti>1500000)
{
    tt=187500+ti*30/100;
}
printf("Total Tax= %d",tt);
return 0;
}
