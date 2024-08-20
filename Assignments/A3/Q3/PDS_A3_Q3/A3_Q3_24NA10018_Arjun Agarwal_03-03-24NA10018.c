#include <stdio.h>

int main(){
int a,b,c,d,ct=0;

printf("\nType any FOUR INTEGERS\n");
scanf("%d%d%d%d",&a,&b,&c,&d);

if(a==b)
ct++;

if(a==c)
ct++;

if(a==d)
ct++;

if(b==c)
ct++;

if(b==d)
ct++;

if(c==d)
ct++;

if(ct==1)
printf("\nYES\n");
else printf("\nNO\n");


return 0;
}
