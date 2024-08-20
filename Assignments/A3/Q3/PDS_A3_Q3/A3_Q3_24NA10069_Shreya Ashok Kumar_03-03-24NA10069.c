#include <stdio.h>
int main()
{
int a,b,c,d,ctr=0;
printf("enter four integers:");
scanf("%d %d %d %d",&a,&b,&c,&d);
if (a==b||a==b||a==c||a==d||b==c||b==d||c==d)ctr++;
else ctr=0;
if (ctr>0)
{printf("yes");
}
else printf("no");
return 0;
}
