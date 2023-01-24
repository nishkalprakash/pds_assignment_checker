/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:9
description:calulating salary
*/
#include<stdio.h>
struct employee
{
	char name[20];
	int wage;
	int day;
};
	void netpay(struct employee e)
{
	float bp,hra,ta,salary;
	bp=e.wage*e.day;
	if(bp<1000)
	hra=0.12*bp;
	else
	hra=.20*bp;
	if (e.day>19)
	ta=0.10*bp;
	else 
	ta=0;
	salary=bp+hra+ta;
	printf("name %s\n",e.name);
	printf("net salary %f\n",salary);
}
	int main()
{
	int n;
	printf("numer of employees\n");
	scanf("%d",&n);
	struct employee a[n];
	printf("name wage days");
	for(int i=0;i<n;i++)
	scanf("%s %d %d",a[i].name,&a[i].wage,&a[i].day);
	for (int i=0;i<n;i++)
	netpay(a[i]);
	return 0;
}
