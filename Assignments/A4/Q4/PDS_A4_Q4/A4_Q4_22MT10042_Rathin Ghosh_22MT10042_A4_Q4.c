//program prints a given pattern
#include<stdio.h>
int main()
{
int n,i,j,m=0;
printf("Enter the number of lines to be printed : ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
for(j=1;j<=i;j++)
{
m=j%2;
printf("%d",m);
}
printf("\n");
}
return 0;
}

