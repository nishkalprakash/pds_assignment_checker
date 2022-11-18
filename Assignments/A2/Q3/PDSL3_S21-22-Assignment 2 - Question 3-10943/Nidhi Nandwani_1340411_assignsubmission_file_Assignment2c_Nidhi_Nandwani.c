/*
Name: Nidhi Nandwani
Roll no. : 21MA10036
Section: 3
Package: Visual Studio Code
*/
#include<stdio.h>
int main()
{
int h,i,j,k,l;
int tc[24],tc_min,m1_min,m2_min,m3_min,m4_min;//tc is total cost
//taking all possible cases 24 outcomes possible for tc,hence an array

tc_min=10000000;//taking tc_min a big number so as to accomodate all sorts of cost for machine
int m1[4], m2[4], m3[4], m4[4];

printf("Enter the price for machine 1 ");
for(int i =0; i<4; i++)
scanf("%d", &m1[i]);

printf("Enter the price for machine 2 ");
for(int i =0; i<4; i++)
scanf("%d", &m2[i]);

printf("Enter the price for machine 3 ");
for(int i =0; i<4; i++)
scanf("%d", &m3[i]);

printf("Enter the price for machine 4 ");
for(int i =0; i<4; i++)
scanf("%d", &m4[i]);

//taking inputs for the prices of machines
for(i=0;i<4;i++)
{
for(j=0;j<4;j++)
{
for(k=0;k<4;k++)
{
for(l=0;l<4;l++)
{
for(h=0;h<24;h++)
{
tc[h]=m1[i]+m2[j]+m3[k]+m4[l];
if(tc[h]<tc_min) 
{
if((i==j)||(i==k)||(i==l)||(j==k)||(j==l)||(k==l)) break;
else
{
tc_min=tc[h];
m1_min=i;
m2_min=j;
m3_min=k;
m4_min=l;
}
}
}
}
}
}
}
printf("Total cost= %d\n",tc_min);
printf("Machine1-Vendor%d\n",m1_min+1);
printf("Machine2-Vendor%d\n",m2_min+1);
printf("Machine3-Vendor%d\n",m3_min+1);
printf("Machine4-Vendor%d\n",m4_min+1);
return 0;
}