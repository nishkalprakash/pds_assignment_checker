/* 
Section 14
Roll No:22CE10045
Name : Aayush Ujwal Mohata
Assignment No:9
Discription :
*/
#include<stdio.h>
struct Date{
	int dd;
	int mm;
	int yyyy;
}x,y;
struct Date ReadDate()
{
	struct Date c;
	scanf("%d %d %d",&c.dd,&c.mm,&c.yyyy);

	return c;
}
void PrintDate(struct Date a)
{
	printf("%d/%d/%d\n",a.dd,a.mm,a.yyyy);
}
int caluleap(struct Date a,struct Date b)
{
	int count=0; 
	for(int i=a.yyyy;i<b.yyyy;i++)
		{
		if(i%4==0)
			count++;
		}
	return count;
}
int diff(struct Date a)
{
	int day,t=0;
	if(a.yyyy%4==0)
		t=1;

	if(a.mm==1)
		day=a.dd-1;
	if(a.mm==2)
		day=30+a.dd;
	if(a.mm==3)
		day=58+a.dd+t;
	if(a.mm==4)
		day=89+a.dd+t;
	if(a.mm==5)
		day=119+a.dd+t;
	if(a.mm==6)
		day=150+a.dd+t;
	if(a.mm==7)
		day=180+a.dd+t;
	if(a.mm==8)
		day=211+a.dd+t;
	if(a.mm==9)
		day=242+a.dd+t;
	if(a.mm==10)
		day=272+a.dd+t;
	if(a.mm==11)
		day=303+a.dd+t;
	if(a.mm==12)
		day=333+a.dd+t;
			
	return day;
}
void FindDays(struct Date a,struct Date b)  
{
	int difference=0;
	if(a.yyyy<b.yyyy)
		{
			difference=(b.yyyy-a.yyyy)*365+caluleap(a,b)+diff(b)-diff(a);
		}
	else
		{
		if(b.yyyy<a.yyyy)
			difference=(a.yyyy-b.yyyy)*365+caluleap(b,a)+diff(a)-diff(b);
		else
		{
			if(diff(a)>diff(b))
			{
				difference=(b.yyyy-a.yyyy)*365+caluleap(a,b)+diff(a)-diff(b);
			}
			else
				difference=(b.yyyy-a.yyyy)*365+caluleap(a,b)+diff(b)-diff(a);
		}
		}	
		
	printf("%d",difference);
	return;
}
int main()
{
	printf("X =");
	x=ReadDate();
	printf("Y =");
	y=ReadDate();
	PrintDate(x);
	PrintDate(y);
	FindDays(x,y);
	printf("\n");
	return 0;
}

	























