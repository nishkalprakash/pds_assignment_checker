#include<stdio.h>
int main()
{
    int income,ipa,tax;
printf("your monthly income\n");
scanf("%d",&income);
ipa=(income*12)-450000;
if (ipa<250000){tax=0;
printf("No tax\n");}

else if (ipa>250000&&ipa<500000)
    {tax=0.05*(ipa-250000);}
else if (ipa>500000&&ipa<750000)
{tax=0.1*(ipa-500000)+12500;}
else if (ipa>750000&&ipa<1000000
         {tax=0.15*(ipa-750000)+37500;}
else if (ipa>1000000&&ipa<1250000)
{tax=0.2*(ipa-1000000)+75000;}
else if (ipa>1250000&&ipa<1500000)
{tax=0.25*(ipa-1250000)+125000;}
else if(ipa>1500000)
{tax=0.30*(ipa-1500000)+187500;}

printf("pay tax=%d",tax);

return(0);

}
