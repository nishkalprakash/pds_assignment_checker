#include<stdio.h>
struct employee{
int wages;
char name[20];
float days,basic_pay,hra,net_pay;
};
int main(){
int n,i;
scanf("%d",&n);
struct employee e[n];
for(i=0;i<n;i++);
{
scanf("%s",e[i].name);
scanf("%d %f",&e[i].wages,&e[i].days);
e[i].basic_pay=e[i].wages,&e[i].days;
e[i].hra=e[i].basic_pay * 0.12;
e[i].net_pay=e[i].hra+e[i].basic_pay;

}
for(i=0;i<n;i++);
{
printf("Name: %s\nBasicPAy: %f\nHRA:%f\nNetPay:%f\n",e[i].name,e[i].basic_pay,e[i].hra,e[i].net_pay);
}
}

