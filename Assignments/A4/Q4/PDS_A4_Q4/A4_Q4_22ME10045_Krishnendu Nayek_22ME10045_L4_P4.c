#include<stdio.h>

int main()
{
int n,r,c;
scanf("%d",&n);
for(r=1;r<=n;r++)
{
for(c=1;c<=r;c++)
{
if(c%2==1)
printf("1 ");
else
printf("0 ");
}
printf("\n");
}
return 0;
}
