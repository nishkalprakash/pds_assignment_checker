/*name: Birru Lavanya
roll no.: 21HS10018*/
#include<stdio.h>
int main()
{ int ms,ys ,tax=0,hl,lip,med,hl1,lip1,med1;
printf("enter ur monthly salary.");
scanf("%d",&ms);
printf("enter ur house loan");
scanf("%d",&hl);
printf("enter ur life insurance premium");
scanf("%d",&lip);
printf("enter ur medical insurance");
scanf("%d",&med);

ys=ms*12;
if(ys>0&&ys<250001)
printf("you r free from tax");
if(ys>250000&&ys<500001)
{tax=tax+(5*ys)/100;
printf("tax = %d",tax);}
if(ys>500000&&ys<750001){
    tax=tax+12500+(10*(ys-500000)/100);
    printf("tax=%d",tax);
}
if(ys>750000&&ys<1000001){
    tax=tax+37500+(15*(ys-750000)/100);
 printf("tax =%d",tax);
    if (hl>250000)
    {hl1=hl-250000;
        /* code */
    }
    else hl1=0;
    if (lip>1500001
    {
        lip1=lip-150000;
    }
    else lip1=0;

if (med>50000)
{
    med1=med-50000;
}
else med1=0;
if(ys>1000000&&ys<1250001){
    tax=tax+75000+(20*(ys-med+med1-lip+lip1-hl+hl1)/100);
     printf("tax =%d",tax);}
     if(ys>1250000&&ys<1500001){
    tax=tax+125000+(25*(ys-med+med1-lip+lip1-hl+hl1)/100);
     printf("tax =%d",tax);}
     if(ys>1500001){
    tax=tax+187500+(30*(ys-med+med1-lip+lip1-hl+hl1)/100);
     printf("tax =%d",tax);}
return(0);
}
