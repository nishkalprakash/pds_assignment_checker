#include <stdio.h>
struct employee{
int w;
char e[10];
int d;
float bp,hra,ta,netpay;
};
struct e1,e2,e3;
int main( )
{
struct employee e[10];
int i;
float bp,hra,ta,netpay,n;
for(i=0;i<10;i++)
{
printf("\nEnter employee name :");
scanf("%s",&e[i].n);

printf("\nEnter wage:");
scanf("%d",&e[i].w);
printf("\nEnter days:");
scanf("%d",&e[i].d);
e[i].bp=e[i].w*e[i].d;
e[i].hra=e[i].bp*0.12;
e[i].netpay=e[i].hra+e[i].bp;
}
for(i=0;i<10;i++)
{
printf("name=%s\nbasicpay=%f\nhra=%f\nnetpay=%f\n",n,bp,hra,netpay);

}
}



















