#include <stdio.h>
float s=0,temp;
float addition(int n)
{
if (n>0)
{
	s=s+1.0/n +addition(n-1);
	return s;
}
else
return 0;
}
int main()
{
int n; float x;
printf("enter a number\n");
scanf("%d",&n);
x=addition(n);
printf("sum is: %f",x);
return 0;
}
