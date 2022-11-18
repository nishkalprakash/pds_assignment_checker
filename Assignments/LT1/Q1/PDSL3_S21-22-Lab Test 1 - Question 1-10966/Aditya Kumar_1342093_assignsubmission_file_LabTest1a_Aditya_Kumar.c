/*
Name:- Aditya Kumar
Roll no.:- 21ME10005
Dept:- Mechanical Engg
Sec-3
Group-4
Lab Test- 1a
Package- stdio.h
*/
#include <stdio.h>
int main()

{   int m,l,h,m1;

printf("Enter your Monthly Income:\n");
scanf("%d",&m);

    printf("Enter your yearly house loan payment amount:\n");
    scanf("%d",&h);


    printf("Enter your yearly life insurance premium payment amount:\n");
    scanf("%d",&l);


    printf("Enter your yearly medical insurance payment amount:\n");
    scanf("%d",&m1);

int y=12*m;
if(y>=1000000)
{
    
    if(h>250000)
    {
        y-=250000;
    }
    else{
        y-=h;
    }
    if(l>150000)
    {
        y-=150000;
    }
    else{
        y-=l;
    }
    if(m1>50000)
    {
        y-=50000;
    }
    else{
        y-=m1;
    }
}
int t;
if(y<=250000)
{
    t=0;
}
else if(y<=500000)
{
    t= 5*y/100;
}
else if(y<=750000)
{
    t= 12500 + (y-500000)*10/100;
}
else if(y<=1000000)
{
    t = 37500 + (y-750000)*15/100;
}
else if(y<=1250000)
{
    t = 75000 + (y-1000000)*20/100;
}
else if(y<=1500000)
{
    t = 125000 + (y-1250000)*25/100;
}
else
{
    t = 187500 + (y-1500000)*30/100;
}
printf("Total Tax: %d\n",t);
    return 0;
}

