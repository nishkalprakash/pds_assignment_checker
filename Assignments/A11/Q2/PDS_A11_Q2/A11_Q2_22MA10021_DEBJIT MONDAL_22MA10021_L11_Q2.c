#include <stdio.h>
int fibo(int n)
{
if(n==0) return 0;
else if(n==1) return 1;
else return fibo(n-1)+fibo(n-2);
}
int check(int n)
{
int k=0,i;
for(i=0;i<10;i++)
{
    if(n==fibo(i)) k++; 
}
return k;
}
int main()
{
	int a;
	scanf("%d",&a);
	if(check(a)) printf("Yes");
	else printf("No");
	return 0;
}
