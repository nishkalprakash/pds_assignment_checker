#include <stdio.h>

int main(){

int a,b,c,d,counter=0;

printf("Enter four integers");

scanf("%d%d%d%d",&a,&b,&c,&d);

if(a==b)
counter=counter+1;

if(b==d)
counter=counter+1;


if(c==d)
counter=counter+1;


if(a==d)
counter=counter+1;


if(a==c)
counter=counter+1;


if(b==d)
counter=counter+1;

if (counter==1) printf("YES\n");

else printf("NO\n");





return 0;

}

