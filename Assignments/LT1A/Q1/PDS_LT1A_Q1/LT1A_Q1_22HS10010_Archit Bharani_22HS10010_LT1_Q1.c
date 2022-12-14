#include<stdio.h>
int main()
{
int n,i,sum,j;
printf("Enter a no.");
scanf("%d",&n);
if(n<=1)
printf("Invalid");
for(i=2;i<=n;i++)
{
sum=0;
	for(j=1;j<i;j++)
	{
	if(i%j==0)
	{
	sum+=j;
	}
}
	if(sum==i){
	printf("%d\n",i);
}
}
return 0;
}
