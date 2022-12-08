/*
sec = 14
name = garvit
assign = 5
roll no = 22EE10028
decrp = no guessing game
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
srand(time(0));
int r,a[5],i,d;
r = rand()%100+1;

for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
if(a[i]>r)
{
printf("your guess is too big\n");
d =0;
}
else
{
if(a[i]<r)
{
printf("your guess is too small\n");
d =0;
}
else
{
if(a[i]==r)
{
printf("winner");
d=1;
break;
}
}
}
}
if(d == 0)
{printf("losser : the no was %d",r);}
return 0;
}

