/*
sec : 14
roll no : 22EE10028
name : garvit
assignment no : 3
description : program to check whether it is valid time or not
*/
#include<stdio.h>

int  main()
{
	int ss,mm,hh;
	scanf("%d%d%d",&ss,&mm,&hh);  /*scanning three no*/
	if(hh<=24)
	{
	if(hh<24&&mm<60&&ss<60)
	{
	printf("valid time - %d:%d:%d",hh,mm,ss);
	}
	else
	{
	printf("invalid time");
	}
	}
	else
	{
	if(mm==0&&ss==0)
	{
	printf("valid time - %d:%d:%d",hh,mm,ss);
	}
	else
	{
	printf("invalid time");
	}
	}
	return 0;
}


