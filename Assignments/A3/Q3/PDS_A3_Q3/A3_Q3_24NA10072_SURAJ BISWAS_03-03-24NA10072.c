//c program to check if exactly two value are same
#include<stdio.h>

int main()
{
	int a,b,c,d,count;
	
	//take input
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	printf("d=");
	scanf("%d",&d);
	
	//if we get any same value we increase count by 1
	if(a==b)
		count++;
	if(a==c)
		count++;
	if(a==d)
		count++;
	if(b==c)
		count++;
	if(d==b)
		count++;
	if(c==d)
		count++;
	
	//at the end if we get count equals to one that means only one equal pair exist so print yes
	if(count==1)
		printf("Yes");
	else
		printf("No");
	
	return 0;
}
