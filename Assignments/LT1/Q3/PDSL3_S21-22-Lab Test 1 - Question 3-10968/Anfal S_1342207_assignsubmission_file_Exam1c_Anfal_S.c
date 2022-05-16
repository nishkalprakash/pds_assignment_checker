/*
Name: Anfal S
Roll no: 21AE10003
Section: 3
Dept: AE
Package: Codeblocks
Test: 1
Operating System: windows
*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main()
{
srand(time(0));
int a,b,c,d,n,m,i,j,k,x=0,y=0,e,f;
printf("enter the no of round you want\n");
scanf("%d",&n);
for(m=1;m<=n;++m)
{
printf("round=%d\n",m);
a=(rand()%(1000-5+1))+5;
b=(rand()%(1000-5+1))+5;
printf("A's number =%d    B's number=%d\n",a,b);
e=a;
i=0;
j=0;
f=b;
while(e>0) {i=i+1;e=e/10;};
while(f>0) {j=j+1;f=f/10;};
if (i==j){
c=0;
d=0;
for(k=0;k>=0;++k){
c=a%10+c;
d=b%10+d;
a=a/10;
b=b/10;
if ((a==0)&&(b==0)) break;
}
printf("A's point =%d   B's point =%d\n",c,d);
if(c>d){printf("A's badge=1   B's badge=0\nA win the round.\n");x=1+x;}
if(d>c){printf("A's badge=0   B's badge=1\nB win the round.\n");y=1+y;}
if(c==d){printf("A's badge=0   B's badge=0\nNo one wins the round.\n");}
}
if(i>j){
printf("A's point =%d   B's point =%d\n",i,j);
printf("A's badge=1   B's badge=0\nA win the round.\n");
x=1+x;
}
if(j>i){
printf("A's point =%d   B's point =%d\n",i,j);
printf("A's badge=0   B's badge=1\nB win the round.\n");
y=1+y;
}
}
if(x>y){printf("A is the winner of the game.\n");}
if(y>x){printf("B is the winner of the game.\n");}
return 0;
}
