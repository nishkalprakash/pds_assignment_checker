#include<stdio.h>
int main()
{
int j=1,n;
do
{
printf("Input a number between 2 and 10:\n");
scanf("%d",&n);
if(n>10&&n<2)
printf("Invalid input\nTry it again");
}
while(n>10&&n<2);
for(int i=1;i<=n;i++)
{
for(int k=1;k<=i;k++)
{
printf("%d ",j);
j++;
}
printf("\n");
}
return 0;
}
