#include<stdio.h>
int fibb(int n);
int main()
{
int n,digit,i=0;
printf("enter the digit of the fibonacci series: ");
scanf("%d",&n);
if(n<0){
printf("enter a integer greater than 0");
}
while(1)
{
digit=fibb(i++);
if(digit==n)
{
printf("YES\n");
break;
}

else if(digit>n)
{
printf("NO\n");
break;
}
}

return 0;
}


int fibb(int n)
{
	if(n==1||n==0){
	if(n==1)
	return 1;
	else if(n==0)
	return 0;
	}
	else {
return fibb(n-1)+fibb(n-2);
}
}

