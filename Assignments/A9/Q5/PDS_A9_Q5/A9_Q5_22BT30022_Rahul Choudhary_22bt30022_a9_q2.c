/*
section 14
roll no. : 22bt30022
name : rahul choudhary
assignment:9
description:
*/
#include<stdio.h>
int main()
{
struct date
{
int date,month,year;
};

}
struct date readdate();
{
struct date d1;
printf("enter date");
scanf("%d%d%d",&d1.date,&d1.momth,&d1.year);
return d1;
}
void printdate(struct date x);
{
printf("%d/%d/%d",x.date,x.month,x.year);
}
void finddays(struct date x,y)
{
int daysinmonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int y1=x.year;
int y2=y.year;
long int n1=x.year*365+y.date;
if(x.month<=2)
y1--;
int leapyear1=(y1/4+y1/400-y1/100);
for(int i=0;i<y.month-1;i++)
n1+=daysinmonth[i];
n1+=leapyear1;
long int n2=y.year*365+y.date;
if(y.month<=2)
y2--;
int leapyear2=(y2/4+y2/400-y2/100);

for(int i=0;i<y.month-1;i++)
n2+=daysinmonth[i];
n2+=leapyear2;
if(n2>=n1)
printf("days=%ld\n",(n2-n1));
else
printf("days=%ld\n",(n1-n2));
}
int main()
{
struct date d1=readdate();
struct date d2=readdate();
printf("x=");printdate(d1);
printf("y=");printdate(d2);
find days(d1,d2);
return 0;
}



