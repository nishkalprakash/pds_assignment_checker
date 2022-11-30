#include<stdio.h>
int main()
{
int a;
printf("Enter the no.:\n");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
for(int j=1;j<=i;j++)
{
if(j%2==0)
printf("0 ");
else if(j%2!=0)
printf("1 ");
}
printf("\n");
}
return 0;
}

