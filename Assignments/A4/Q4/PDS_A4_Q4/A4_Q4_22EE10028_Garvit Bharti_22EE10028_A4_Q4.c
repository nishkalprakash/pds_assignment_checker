#include<stdio.h>


int main()
{
int n,i,j;
printf("enter the value for no of line");
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<=i;j++)
{
if(j%2==0)
{
printf("1 ");
}
else
{printf("0 ");}
}
printf("\n");
}
return 0;
}

